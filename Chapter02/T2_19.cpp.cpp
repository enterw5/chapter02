/*FileName:T2_19.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 11,2022
Function: output the sum,average,product,smaller and largest of the three interger*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,sum,average,product,smallest,large;
    cin>>a>>b>>c;
    sum=a+b+c;
    average=(a+b+c)/3;
    product=a*b*c;
    cout<<"Input three of different integers:"<<a<<" "<<b<<" "<<c<<endl;
    cout<<"Sum is "<<sum<<endl;
    cout<<"Average is "<<average<<endl;
    cout<<"Product is "<<product<<endl;
    if(a<b)
        {
        if(a<c)
        {cout<<"Smallest is "<<a<<endl;
             {
                 if(b<c)
                cout<<"Largest is "<<c<<endl;
             else
                cout<<"Largest is "<<b<<endl;
                }}
        else cout<<"Smallest is"<<c<<" "<<"Largest is "<<b<<endl;
        }
    else if(a>c)
        {
          if(b>c)
          cout<<"Smallest is"<<c<<" "<<"Largest is "<<a<<endl;
          else
          cout<<"Smallest is"<<b<<" "<<"Largest is "<<a<<endl;
        }
        else cout<<"Smallest is"<<b<<" "<<"Largest is "<<c<<endl;
    return 0;
}
