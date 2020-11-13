#include<iostream>
using namespace std;
class Addition
{
int num1,num2,add;
public: void display()
{
cout<<"enter a number:\n";
cin>>num1;
cout<<"enter a number:\n";
cin>>num2;
add=num1+num2;
cout<<"result of num1+num2 is:"<<add;
}
};
int main()
{
Addition a1;
a1.display();
}
