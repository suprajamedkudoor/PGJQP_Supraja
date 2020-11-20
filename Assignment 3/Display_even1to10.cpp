#include<iostream>
using namespace std;
class Even_Numbers
{
int i;
public: void display()
{
for(int i=0;i<=10;i++)
{
if(i%2==0)
{
cout<<i<<"\n";
}
}
}
};
int main()
{
Even_Numbers e1;
e1.display();
}
