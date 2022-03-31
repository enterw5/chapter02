/*FileName:T2_28.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 11,2022
Function: decompose a five digit number and separate the output with three spaces*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,f;
    cin>>a;
    f=a%10;
    e=a/10%10;
    d=a/100%10;
    c=a/1000%10;
    b=a/10000%10;
    cout<<b<<"   "<<c<<"   "<<d<<"   "<<e<<"   "<<f;
    return 0;
}
