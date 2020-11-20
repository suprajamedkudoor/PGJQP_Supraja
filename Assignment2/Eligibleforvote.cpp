#include<iostream>
using namespace std;
class Eligible_Vote
{
int age;
public: void display()
{
cout<<"enter the age";
cin>>age;
if(age>18)
{
cout<<"candidate is eligible for vote";
}
else
{
cout<<"not eligible for vote";
}
}
};
int main()
{
Eligible_Vote e1;
e1.display();
}
