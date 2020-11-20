#include<iostream>
using namespace std;
class Reverse
{
int i;
public: void display()
{
for(i=10;i>=1;i--)
{
cout<<i<<"\n";
}
}
};
int main()
{
Reverse r1;
r1.display();
}
