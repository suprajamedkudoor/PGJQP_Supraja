#include<iostream>
using namespace std;
class Leap_Year
{
int i;
public: void display()
{
cout<<"enter an year";
cin>>i;
if(i%4==0)
{
cout<<"it is a leap year:"<<i;
}
else
{
cout<<"it is not a leap year:"<<i;
}
}
};
int main()
{
Leap_Year l1;
l1.display();
}
