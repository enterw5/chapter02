/*FileName:T2_21.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 11,2022
Function: output the rectangle,ellipse,scissors and diamond*/
#include <iostream>

using namespace std;

int main()
{
    int i=1;
   cout<<"*********"<<endl;
   while(i<=7)
    {cout<<"*       *"<<endl;
   i++;}
   cout<<"*********"<<endl;


   int a=1;
   cout<<"   ***   "<<endl;
   cout<<" *     * "<<endl;
   while(a<=5)
   {
       cout<<"*       *"<<endl;
       a++;
   }
   cout<<" *     * "<<endl;
   cout<<"   ***   "<<endl;



   int b=1;
   cout<<"  *  "<<endl;
   cout<<" *** "<<endl;
   cout<<"*****"<<endl;
   for(;b<=6;b++)
        cout<<"  *  "<<endl;



   cout<<"    *    "<<endl;
   cout<<"   * *   "<<endl;
   cout<<"  *   *  "<<endl;
   cout<<" *     * "<<endl;
   cout<<"*       *"<<endl;
   cout<<" *     * "<<endl;
   cout<<"  *   *  "<<endl;
   cout<<"   * *   "<<endl;
   cout<<"    *    "<<endl;
    return 0;
}
