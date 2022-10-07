#ifndef NODE_H
#define NODE_H

#include <iostream>
#include<cstring>
#include<string>
#include<map>
#include<stack>
#include<queue>
#include<vector>
#include <iomanip>
#include "node.h"

using namespace std;


struct node {
    string no;//车牌号
    int time;//车辆进入的时间（以小时为单位）
    int sub;//车辆在停车场的位置
} nod;
map<string, int> mp;//用来检测车辆在停车场或者在便道内
deque<node> q1;//模拟停车场
deque<node> q2;//模拟便道
stack<node> sk;//交换媒介
//string str1 = "park", str2 = "pavement";

void Push_Car(int n)//驶入
{
    cout << "Please enter the license plate number of the vehicle you want to enter" << endl;
    string x;
    int y;
    cin >> x;
    cout << "\n"
            "Please enter the time when the vehicle entered the parking lot (e.g. 0210 1530)" << endl;
    cin >> y;
    if (!mp[x])//如果此车不在停车场或者便道内执行以下命令
    {
        if (q1.size() < n)//如果停车场未满
        {
            nod.no = x;
            nod.time = y;
            nod.sub = q1.size() + 1;
            q1.push_back(nod);
            mp[x] = q1.size();
            cout << "succeed parking!" << endl;
        } else//停车场满了之后进入便道
        {
            nod.no = x;
            nod.time = y;
            nod.sub = q2.size() + 1;
            q2.push_back(nod);
            mp[x] = n + q2.size();
            cout << "ur car waiting in queue" << endl;
        }
    } else
        cout << "wrong.ur car is not here" << endl;
}

void Pop_Car(int n)//驶出
{
    cout << "car plate to leave" << endl;
    string x;
    int y, ans, minutes, hours, inhour;
    float payment;
    cin >> x;
    cout << "\n"
            "Please enter the time the vehicle left the parking lot (e.g. 0210 1530)" << endl;
    cin >> y;
    if (!mp[x])
        cout << "wrong!car is not here" << endl;
    else if (mp[x] <= n)//如车在停车场内
    {
        mp[x] = 0;
        while (q1.back().no != x)//车出
        {
            q1.back().sub--;
            sk.push(q1.back());
            q1.pop_back();
        }
        ans = y - q1.back().time;
        hours = ans / 100;
        minutes = ans - hours * 100 + hours * 60;
        inhour = minutes / 60;
        minutes = minutes % 60;

        payment = hours * 5 + minutes * 5.0 / 60;
        q1.pop_back();
        while (!sk.empty()) {
            q1.push_back(sk.top());
            sk.pop();
            mp[q1.back().no] = q1.back().sub;
        }
        if (!q2.empty())//如果便道里也有车，那么进入停车场，并且便道后面的车向前移动
        {
            q2.front().time = y;
            q2.front().sub = q1.size() + 1;
            q1.push_back(q2.front());
            q2.pop_front();
            while (!q2.empty()) {
                q2.back().sub--;
                sk.push(q2.back());
                q2.pop_back();k
            }
            while (!sk.empty()) {
                q2.push_back(sk.top());
                sk.pop();
                mp[q2.back().no] = q1.back().sub;
            }
            mp[q1.back().no] = q1.size();
        }
        cout << "the car parking for " << hours << " hour " << minutes << " min " << endl;
        cout << "this car should pay: " << setprecision(4) << payment << " yuan " << endl;
    } else if (mp[x] > n)//如果车在便道里，那么直接离开，后面的车向前移动
    {
        mp[x] = 0;
        while (q2.back().no != x) {
            q2.back().sub--;
            sk.push(q2.back());
            q2.pop_back();
        }
        q2.pop_back();
        while (!sk.empty()) {
            q2.push_back(sk.top());
            sk.pop();
        }
        cout << "the car has not enter the parking. so no cost" << endl;
    }
}

void Query_Parking(int n)//查询停车场的停车状态
{
    cout << "car_plate to query" << endl;
    cout << endl;
    string x;
    cin >> x;
    if (!mp[x])
        cout << "this car didn't park here" << endl;
    else if (mp[x] <= n)
        cout << "car is in the NO. " << mp[x] << "place" << endl;
    else
        cout << "the car is in the NO. " << mp[x] - n << "place" << endl;
}

void Query_Empty(int n)//查询空车位
{
    cout << endl;
    if (q1.size() == n) {
        cout << "fully parking" << endl;
    } else {
        cout << "parking's " << q1.size() + 1;
        for (int i = q1.size() + 2; i <= n; i++)
            cout << " , " << i;
        cout << " place is empty" << endl;
    }
}

//void Query_Queue(int n){
//    cout << q1.
//}

#endif