///*FileName:T2_18.cpp
//Author:liumengdi
//E-mail:1771314862@qq.com
//Time:Mar. 11,2022
//Function:compare the size of two numbers and output the large of them. */
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b)
        cout<<a<<"is large."<<endl;
    else if(a<b)
        cout<<b<<"is large."<<endl;
    else cout<<"These numbers are equal."<<endl;
    return 0;
}
