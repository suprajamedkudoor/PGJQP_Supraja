#include<iostream>
using namespace std;
class Average
{
int num1,num2,num3,num4,num5,avg;
public: void display()
{
cout<<"enter the ten values";
cin>>num1>>num2>>num3>>num4>>num5;
avg=num1+num2+num3+num4+num5/2;
if(avg>10)
{
cout<<"Greater than 10";
}
else
{
cout<<"not greater than 10";
}
}
};
int main()
{
Average a1;
a1.display();
}
