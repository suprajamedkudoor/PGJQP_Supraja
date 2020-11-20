#include<iostream>
using namespace std;
class Notequality
{
int num1,num2;
public: void display()
{
cout<<"enter first value";
cin>>num1;
cout<<"enter second value";
cin>>num2;
if(num1!=num2)
{
cout<<"both are not equal";
}
else
{
cout<<"both are equal";
}
}
};
int main()
{
Notequality n1;
n1.display();
}
