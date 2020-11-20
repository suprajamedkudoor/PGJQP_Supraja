#include<iostream>
using namespace std;
class Swaptwonumbers
{
int a=5,b=10,temp;
public: void display()
{
cout<<"Before swapping"<<endl;
cout<<a<<"\n"<<b;
temp=a;
a=b;
b=temp;
cout<<"\n After swapping."<<"\n"<<a<<"\n"<<b;
}
};
int main()
{
Swaptwonumbers s1;
s1.display();
}
