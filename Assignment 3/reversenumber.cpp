#include<iostream>
using namespace std;
class reverse
{
int rev=0,rem,num;
public: void display_reverse()
{
cout<<"enter a number";
cin>>num;
while(num>0)
{
rem=num%10;
rev=rev*10+rem;
}
cout<<"Reverse:"<<rev;
}
};
int main()
{
reverse r1;
r1.display_reverse()
}
