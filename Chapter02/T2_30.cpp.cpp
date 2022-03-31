/*FileName:T2_30.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 11,2022
Function:caculate BMI*/
#include <iostream>

using namespace std;

int main()
{
    double w,h,BMI;
    cin>>w>>h;
    BMI=w/(h*h);
    cout<<"BMI="<<BMI<<endl;
    cout<<"BMI VALUES\nUnderweight: less than 18.5\nNormal:      between 18.5 and 24.9\nOverweight:  between 25 and 29.9\nObese:       30 or greater";
    return 0;
}
