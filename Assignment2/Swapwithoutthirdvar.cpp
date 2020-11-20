#include<iostream>
using namespace std;
class Swap_thirdvariable
{
int a=5,b=10;
public: void display()
{
cout<<"enter the values before swapping"<<"\n"<<a<<b<<endl;
a=a+b;
b=a-b;
a=a-b;
cout<<"enter the values after swapping"<<endl;
cout<<a<<b<<endl;
}
};
int main()
{
Swap_thirdvariable s1;
s1.display();
}
