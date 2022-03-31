/*FileName:T2_20.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 11,2022
Function: caclulate the circle of diameter,primeter and area of circle*/
#include <iostream>

using namespace std;

int main()
{
    int r,d,l,s;
    cin>>r;
    d=2*r;
    l=2*3.14159*r;
    s=3.14159*r*r;
    cout<<d<<"\t"<<l<<"\t"<<s;
    return 0;
}
