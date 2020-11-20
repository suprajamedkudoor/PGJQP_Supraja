#include<iostream>
using namespace std;
class Greater
{
int num1;
public: void display()
{
cout<<"enter the value";
cin>>num1;
if(num1>10)
{
cout<<"number is greater than 10";
}
else
{
cout<<"number is not greater than 10";
}
}
};
int main()
{
Greater g1;
g1.display();
}
