//
//  main.c
//  6.27to implement read
//
//  Created by 鲁祥 on 2018/6/27.
//  Copyright © 2018年 鲁祥. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    float a[10],s=0,max,min;
    cout<<"请分别输入十个评委的分；"<<endl;
    for (int i=0;i<10;i++)
        cin>>a[i];
    max=a[0];
    min=a[9];
    for(i=0;i<10;i++)
    {
        if(a[i]>max)max=a[i];
        if(a[i]<min)min=a[i];
        s+=a[i];
    }
    s=(s-max-min)/8;
    cout<<"最后得分；"<<s<<endl;
    return 0;
}
