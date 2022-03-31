/*FileName:T2_25.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 11,2022
Function: judge whether the first number is a multiple of the second number*/
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a%b==0)
        cout<<"第一个数是第二个数的倍数"<<endl;
    else cout<<"第一个数不是第二个数的倍数"<<endl;
    return 0;
}
