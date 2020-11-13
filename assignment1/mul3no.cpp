#include<iostream>
using namespace std;
class Multiplication
{
int num1,num2,num3,mul;
public: void display()
{
cout<<"enter a number:\n";
cin>>num1;
cout<<"enter a number:\n";
cin>>num2;
cout<<"enter a number:\n";
cin>>num3;
mul=num1*num2*num3;
cout<<"result of num1*num2*num3 is:"<<mul;
}
};
int main()
{
Multiplication a1;
a1.display();
}
