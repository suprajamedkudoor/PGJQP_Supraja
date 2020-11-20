#include<iostream>
using namespace std;
class Addition
{
int num1,num2,add;
public: void display()
{
cout<<"enter the values of two numbers:\n";
cin>>num1>>num2;
add=num1+num2;
cout<<"addition is:"<<add<<endl;
if(add>100)
{
cout<<"greater than 100";
}
else
{
cout<<"not greater than 100";
}
}
};
int main()
{
    Addition a1;
    a1.display();
}
