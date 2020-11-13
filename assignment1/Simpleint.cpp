#include<iostream>
using namespace std;
class SimpleInt
{
int SI,p,t,r;
public: void display()
{
cout<<"Enter the p value";
cin>>p;
cout<<"Enter the t value";
cin>>t;
cout<<"Enter the r value";
cin>>r;
SI=p*t*r/100;
cout<<"result of p*t*r/100 is:"<<SI;
}
};
int main()
{
SimpleInt b1;
b1.display();
}
