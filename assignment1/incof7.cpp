#include<iostream>
using namespace std;
class Increment
{
int num1,c;
public: void display()
{
cout<<"enter the value of num1";
cin>>num1;
c=num1+7;
cout<<"the result of num1+7 is:"<<c;
}
};
int main()
{
Increment d1;
d1.display();
}
