//
// Created by Van_XQ on 2021/11/28.
//

#ifndef READFILE_H
#define READFILE_H
#include<iostream>
#include <vector>
#include <fstream>
#include<sstream>
#include"landscape.h"
#include"path.h"
using namespace std;


class readFile{
public:
    static int read_file(landscape(&ls)[6],path(&pa)[9] , int**(&len))
    {
            ifstream l(R"(D:\CodeWorkplace\C++_By_Clion\Proj05_sightmanagement\landscape.txt)");
            ifstream p("D://CodeWorkplace//C++_By_Clion//Proj05_sightmanagement//path.txt");
            string temp;
//            stringstream buf;
            int i=0;
//            int len1[6][6];
//            for(int t=0;t<6;t++)
//            {
//                for(int s=0;s<6;s++)
//                {
//                    len1[t][s]=INT_MAX;
//                }
//            }
            if (!l.is_open()||!p.is_open())
            {
                return 1;
            }
            for(i=0;i<6;i++)
            {
                getline(l,temp);
                ls[i].id=atoi(temp.c_str());
                getline(l,temp);
                ls[i].name=temp;
                getline(l,temp);
                ls[i].location.x=atoi(temp.c_str());;
                getline(l,temp);
                ls[i].location.y=atoi(temp.c_str());;
                getline(l,temp);
                ls[i].information=temp;
            }
            i=0;
            while(!p.eof())
            {
                p>>pa[i].id1>>pa[i].id2>>pa[i].length;
                len[pa[i].id1-1][pa[i].id2-1]=pa[i].length;
                len[pa[i].id2-1][pa[i].id1-1]=pa[i].length;
                i++;
            }
//            for(int t=0;t<6;t++)
//            {
//                for(int s=0;s<6;s++)
//                {
//                    len[t][s]=len1[t][s];
//                }
//            }
            p.close();
            l.close();
            return 0;
        }
};
#endif // READFILE_H
