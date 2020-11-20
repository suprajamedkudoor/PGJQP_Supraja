#include<iostream>
using namespace std;
class PowerofNumber
{
int base,exponent,result=1,i;
public: void display()
{
cout<<"enter base and exponent:";
cin>>base>>exponent;
for(i=1;i<=exponent;i++)
{
    result=result*base;
}
cout<<base<<"^"<<exponent<<"="<<result<<endl;
}
};
int main()
{
PowerofNumber p1;
p1.display();
}
