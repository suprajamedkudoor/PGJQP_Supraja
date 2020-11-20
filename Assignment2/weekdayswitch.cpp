#include<iostream>
using namespace std;
class Week_days
{
int choice;
public: void display()
{
cout<<"enter your choice";
cin>>choice;
switch(choice)
{
case 1: cout<<"sunday";
break;
case 2: cout<<"monday";
break;
case 3: cout<<"tuesday";
break;
case 4:cout<<"wednesday";
break;
case 5:cout<<"thursday";
break;
case 6:cout<<"friday";
break;
case 7:cout<<"saturday";
break;
default: cout<<"Invalid choice";
break;
}
}
};
int main()
{
Week_days w1;
w1.display();
}
