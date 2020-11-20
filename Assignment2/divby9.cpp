#include<iostream>
using namespace std;
class Divisible
{
int i;
public: void display()
{
cout<< "enter a value";
cin>>i;
if(i%9==0)
{
cout<<"it is divisible by 9";
}
else
{
cout<<"It is not divisible by 9";
}
}
};
int main()
{
Divisible d1;
d1.display();
}
