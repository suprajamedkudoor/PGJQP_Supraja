#include<iostream>
using namespace std;
class FloatMultiplication
{
float num1,num2,mul;
public: void display()
{
cout<<"enter a number:\n";
cin>>num1;
cout<<"enter a number:\n";
cin>>num2;
mul=num1*num2;
cout<<"the result of num1*num2 is:"<<mul;
}
};
int main()
{
FloatMultiplication d1;
d1.display();
}
