#include<iostream>
using namespace std;
class Natural_Numbers
{
int i,sum=0;
public: void display()
{
for(i=1;i<=10;i++)
{
sum +=i;
}
cout<<sum;
}
};
int main()
{
Natural_Numbers n1;
n1.display();
}
