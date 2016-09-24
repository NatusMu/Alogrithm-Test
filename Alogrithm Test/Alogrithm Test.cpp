//
//  Alogrithm Test.cpp
//  Alogrithm Test
//
//  Created by 黄沐 on 2016/9/22.
//  Copyright © 2016年 Mu Huang. All rights reserved.
//

#include "Alogrithm Test.hpp"
using namespace std;
int n=10;//初始化为10 为测试数据
void Search(int a[],int x)
{
    int low=0,high=n-1,mid=0,flag=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==x)
        {
            flag=1;
            cout<<x<<"在数组中，其位置是："<<mid<<endl;
            break;
        }
        else if(a[mid]>x) high=mid-1;
        else low=mid+1;
    }
    if(flag==0)
    {
        cout<<x<<"不在数组中：";
        if(a[mid]>x)
        {
            if(mid>0)cout<<" 小于其的最大元素的位置为："<<mid-1<<endl;
            else cout<<"数组中没有小于该元素的最大元素"<<endl;
            cout<<"大于其的最小元素的位置为："<<mid<<endl;
        }
        else {
            cout<<"小于其的最大元素的位置为："<<mid<<endl;
            if(mid<n-1)cout<<"大于其的最小元素的位置为："<<mid+1<<endl;
            else cout<<"数组中没有大于该元素的最小元素"<<endl;
        }
    }
}
void Test(int a1[],int b,int c,int d)
{
    
    Search(a1,b);
    Search(a1,c);
    Search(a1,d);
}
int main()
{
    int a[1001],i,x;
    
    int a1[]={1,2,3,4,5,6,7,8,9,10};//测试数组
    int b=5,c=11,d=0;//3个测试数据
    
    Test(a1,b,c,d);//测试函数
    while(cin>>n)
    {
        while(n<2)
        {
            cout<<"你所输入的数据已经超出范围,请重新输入"<<endl;
            cin>>n;
            if(n>=2)
            {
                cout<<"输入正确"<<endl;
            }
        }
        cout<<"请输入已经排好序的数组元素:"<<endl;
        for(i=0;i<n;i++)
            cin>>a[i];
        cout<<"请输入需要查找的元素：";
        cin>>x;
        Search(a,x);
        cout<<endl;
    }
    

    return 0;
}