#include<iostream>
using namespace std;
class Least
{
int a,b,c;
public: void display()
{
cout<<"enter the values of a,b and c";
cin>>a>>b>>c;
if(a<b&&a<c)
{
cout<<"a is the least"<<a;
}
else if(b<a && b<c)
{
cout<<"b is the least"<<b;
}
else
{
cout<<"c is the least"<<c;
}
}
};
int main()
{
Least l1;
l1.display();
}
