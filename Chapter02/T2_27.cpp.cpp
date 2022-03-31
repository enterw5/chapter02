/*FileName:T2_27.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 11,2022
Function: output equivalent integer value of character*/
#include <iostream>

using namespace std;

int main()
{

    cout<<static_cast<int>('A')<<endl;
    char a=static_cast<int>('A');
    cout<<static_cast<int>('s')<<endl;
    char b=static_cast<int>('s');
    cout<<static_cast<int>('5')<<endl;
    char c=static_cast<int>('5');
    cout<<static_cast<int>('$')<<endl;
    char d=static_cast<int>('$');
    return 0;
}
