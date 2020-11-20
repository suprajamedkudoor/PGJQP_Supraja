#include<iostream>
using namespace std;
class EvenOdd
{
int num1;
public: void display()
{
cout<<"enter num1 value";
cin>>num1;
if(num1%2==0)
{
  cout<<"It is a even number";
}
else
{
cout<<"It is a odd number";
}
}
};
int main()
{
    EvenOdd e1;
    e1.display();
}
