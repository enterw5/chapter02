/*FileName:T2_29.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 11,2022
Function: caculate the sum of squares and cubes of intergers 0~10 */
#include <iostream>

using namespace std;

int main()
{
    cout<<"integer square cube\n";
    int a,b,i;
    for(int i=0;i<=10;i++)
    {
        a=i*i;b=a*i;
        cout<<i<<"\t"<<a<<"\t"<<b<<endl;
    }
    return 0;
}
