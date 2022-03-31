/*FileName:T2_23.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 11,2022
Function: output the min and max of the five numbers*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,a1,b1,c1,d1,e1,max,min;
    cin>>a>>b>>c>>d>>e;
    a1=a;b1=b;c1=c;d1=d;e1=e;
    if(a>b);
        else a=b;
    if(a>c);
        else a=c;
    if(a>d);
        else a=d;
    if(a>e);
        else a=e;
    cout<<"the max of the five number is:"<<a<<endl;

    if(a1<b1);
    else a1=b1;
    if(a1<c1);
        else a1=c1;
    if(a1<d1);
        else a1=d1;
    if(a1<e1);
        else a1=e1;
    cout<<"the min of the five number is:"<<a1<<endl;
    return 0;
}
