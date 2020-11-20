#include<iostream>
using namespace std;
class Display_Numbers
{
int i;
public: void display()
{
for(i=0;i<=10;i++)
{
cout<<i<<"\n";
}
}
};
int main()
{
Display_Numbers d1;
d1.display();
}
