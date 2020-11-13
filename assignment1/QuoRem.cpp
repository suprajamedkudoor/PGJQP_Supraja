#include<iostream>
using namespace std;
class RemQuo
{
int divisor, dividend, quotient, remainder;
public: void display()
{
cout<<"enter dividend";
cin>>divisor;
cout<<"enter divisor";
cin>>divisor;
quotient=dividend/divisor;
remainder=dividend%divisor;
cout<<"quotient="<<quotient;
cout<<"remainder="<<remainder;
}
};
int main()
{
    RemQuo d1;
    d1.display();
}
