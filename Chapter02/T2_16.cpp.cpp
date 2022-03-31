
/*FileName:T2_16.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 11,2022
Function:output the sum,product,difference and merchant of the two numbers */
#include <iostream>

using namespace std;

int main()
{
    double a,b,sum,product,difference,merchant;
    cin>>a>>b;
    sum=a+b;
    product=a*b;
    difference=a-b;
    merchant=a/b;
    cout<<"The sum of a and b is:"<<sum<<endl;
    cout<<"The product of a and b is:"<<product<<endl;
    cout<<"The difference of a and b is:"<<difference<<endl;
    cout<<"the merchant of a and b is:"<<merchant<<endl;
    return 0;
}
