#include<iostream>
using namespace std;
class Equality_numbers
{
int num1,num2;
public: void display()
{
cout<<"enter first value";
cin>>num1;
cout<<"enter second value";
cin>>num2;
if(num1==num2)
{
cout<<"both are equal";
}
else
{
cout<<"both are not equal";
}
}
};
int main()
{
Equality_numbers e1;
e1.display();
}
