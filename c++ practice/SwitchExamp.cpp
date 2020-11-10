#include<iostream>
using namespace std;
class SwitchEx
{
public: void display()
{
Cout<<"enter your choice";
cin>>choice;
int choice;
switch(choice)
{
case1:cout<<"sunday";
break;
case2:cout<<"tuesday";
break;
case3:cout<<"wednesday";
break;
case4:cout<<"thursday";
break;
case5:cout<<"friday";
break;
case6:cout<<"saturday";
break;
default:cout<<"invalid choice";
}
}
};
int main()
{
SwitchEx g1;
g1.display();
}
