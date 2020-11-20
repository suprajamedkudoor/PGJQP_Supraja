#include<iostream>
using namespace std;
class Check_Number
{
int num1;
public: void display()
{
cout<<"enter a value";
cin>>num1;
if(num1>0)
{
cout<<"positive number":<<num1;
}
else
{
cout<<"negative number"<<num1;
}
if(num1==0)
{
cout<<"zero number:"<<num1;
}
}
};
int main()
{
Check_Number c1;
c1.display();
}
