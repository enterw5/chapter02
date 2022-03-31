/*FileName:T2_31.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 11,2022
Function:calculate the cost of driving every day */
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,sum;//a代表每天开的总英里数，b代表每加仑汽油的价格，c代表每加仑汽油可以开的平均英里数，d代表每日的停车费，e代表每日的通行费，sum代表每日开车的费用
    cin>>a>>b>>c>>d>>e;
    sum=a/c*b+d+e;
    cout<<"用户每日开车的费用："<<sum<<endl;
    return 0;
}
