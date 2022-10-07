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
    string no;//���ƺ�
    int time;//���������ʱ�䣨��СʱΪ��λ��
    int sub;//������ͣ������λ��
} nod;
map<string, int> mp;//������⳵����ͣ���������ڱ����
deque<node> q1;//ģ��ͣ����
deque<node> q2;//ģ����
stack<node> sk;//����ý��
//string str1 = "park", str2 = "pavement";

void Push_Car(int n)//ʻ��
{
    cout << "Please enter the license plate number of the vehicle you want to enter" << endl;
    string x;
    int y;
    cin >> x;
    cout << "\n"
            "Please enter the time when the vehicle entered the parking lot (e.g. 0210 1530)" << endl;
    cin >> y;
    if (!mp[x])//����˳�����ͣ�������߱����ִ����������
    {
        if (q1.size() < n)//���ͣ����δ��
        {
            nod.no = x;
            nod.time = y;
            nod.sub = q1.size() + 1;
            q1.push_back(nod);
            mp[x] = q1.size();
            cout << "succeed parking!" << endl;
        } else//ͣ��������֮�������
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

void Pop_Car(int n)//ʻ��
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
    else if (mp[x] <= n)//�糵��ͣ������
    {
        mp[x] = 0;
        while (q1.back().no != x)//����
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
        if (!q2.empty())//��������Ҳ�г�����ô����ͣ���������ұ������ĳ���ǰ�ƶ�
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
    } else if (mp[x] > n)//������ڱ�����ôֱ���뿪������ĳ���ǰ�ƶ�
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

void Query_Parking(int n)//��ѯͣ������ͣ��״̬
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

void Query_Empty(int n)//��ѯ�ճ�λ
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