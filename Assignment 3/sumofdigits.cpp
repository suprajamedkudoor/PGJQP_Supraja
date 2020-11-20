#include<iostream>
using namespace std;
class Digits
{
int n,sum=0,m;
public: void display()
{
cout<<"Enter a number: ";
cin>>n;
while(n>0)
{
m=n%10;
sum=sum+m;
n=n/10;
}
cout<<"Sum is= "<<sum<<endl;
}
};
int main()
{
Digits d1;
d1.display();
}
