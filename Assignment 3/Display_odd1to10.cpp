#include<iostream>
using namespace std;
class Odd_Numbers
{
int i;
public: void display()
{
for(int i=0;i<=100;i++)
{
if(i%2==1)
{
cout<<i<<"\n";
}
}
}
};
int main()
{
Odd_Numbers e1;
e1.display();
}
