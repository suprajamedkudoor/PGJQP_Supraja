#include<iostream>
using namespace std;
class Area
{
double pi=3.14,area,r;
public: void display()
{
cout<<"Enter the r value";
cin>>r;
area=2*pi*r*r;
cout<<"result of 2*pi*r*r is:"<<area;
}
};
int main()
{
Area b1;
b1.display();
}
