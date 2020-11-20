#include<iostream>
using namespace std;
class Greater
{
int num1,num2,num3;
public: void display()
{
cout<<"enter the first number";
cin>>num1;
cout<<"enter the second number";
cin>>num2;
cout<<"enter the third value";
cin>>num3;
if(num1>num2 && num1>num3)
{
cout<<"num1 is greater:"<<num1;
}
if(num2>num1 && num2>num3)
{
cout<<"num2 is greater:"<<num2;
}
else
{
cout<<"num3 is greater:"<<num3;
}
}
};
int main()
{
Greater g1;
g1.display();
}
