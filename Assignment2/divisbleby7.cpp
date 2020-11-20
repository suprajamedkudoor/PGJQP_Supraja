#include<iostream>
using namespace std;
class Divisible
{
int i;
public: void display()
{
cout<< "enter a value";
cin>>i;
if(i%7==0)
{
cout<<"it is divisible by 7";
}
else
{
cout<<"It is not divisible by 7";
}
}
};
int main()
{
Divisible d1;
d1.display();
}
