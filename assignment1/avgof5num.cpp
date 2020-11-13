#include<iostream>
using namespace std;
class Average
{
int num1,num2,num3,num4,num5,avg;
public:void display()
{
cout<<"enter the value of num1";
cin>>num1;
cout<<"enter the value of num2";
cin>>num2;
cout<<"enter the value of num3";
cin>>num3;
cout<<"enter the value of num4";
cin>>num4;
cout<<"enter the value of num5";
cin>>num5;
avg=num1+num2+num3+num4+num5/2;
cout<<"result of num1+num2+num3+num4+num5/2 is:"<<avg;
}
};
int main()
{
Average d1;
d1.display();
}
