#include<iostream>
using namespace std;
class AddMul
{
int num1,num2,add,mul;
public: void display()
{
cout<<"enter two numbers";
cin>>num1>>num2;
add=num1+num2;
mul=num1*num2;
cout<<"addition"<<add<<endl;
cout<<"multiplication"<<mul<<endl;
if(add>mul)
{
cout<<"addition is greater"<<add<<endl;
}
else
{
cout<<"multiplication is greater"<<mul<<endl;
}
}
};
int main()
{
AddMul a1;
a1.display();
}
