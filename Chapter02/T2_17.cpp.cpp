/*FileName:T2_17.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 11,2022
Function:Output the number 1~4 on the same line,separeted by spaces */
#include <iostream>

using namespace std;

int main()
{
    cout<<"1 2 3 4";
    cout<<"1 "<<"2 "<<"3 "<<"4";
    int a=0;
    while(a<4)
       {
           a++;
           cout<<a;
       }
    return 0;
}
