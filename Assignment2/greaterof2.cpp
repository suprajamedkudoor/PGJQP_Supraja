#include<iostream>
using namespace std;
class Greater
{
int num1,num2;
public: void display()
{
cout<<"enter fisrt value";
cin>>num1;
cout<<"enter second value";
cin>>num2;
if(num1>num2)
{
cout<<"greater number:"<<num1;
}
else
{
cout<<"greater number:"<<num2;
}
}
};
int main()
{
Greater g1;
g1.display();
}
