/*FileName:T2_31.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 11,2022
Function:calculate the cost of driving every day */
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,sum;//a����ÿ�쿪����Ӣ������b����ÿ�������͵ļ۸�c����ÿ�������Ϳ��Կ���ƽ��Ӣ������d����ÿ�յ�ͣ���ѣ�e����ÿ�յ�ͨ�зѣ�sum����ÿ�տ����ķ���
    cin>>a>>b>>c>>d>>e;
    sum=a/c*b+d+e;
    cout<<"�û�ÿ�տ����ķ��ã�"<<sum<<endl;
    return 0;
}
