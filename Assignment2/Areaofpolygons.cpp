#include<iostream>
using namespace std;
class Area_Polygons
{
int len,breadth,choice;
const float pi=3.14;
float r,s;
float aofc,aofs,aofrec;
public: void display()
{
cout<<"enter your choice";
cin>>choice;
switch(choice)
{
case 1:
cout<<"enter the radius";
cin>>r;
aofc=pi*r*r;
cout<<"area of circle:"<<aofc;
break;
case 2: cout<<"enter the side";
cin>>s;
aofs=s*s;
cout<<"area of sqaure:"<<aofs;
break;
case 3: cout<<"enter the length and breadth:\n";
cin>>len>>breadth;
aofrec=len*breadth;
cout<<"area of rectangle:"<<aofrec;
break;
default: cout<<"invalid choice";
break;
}
}
};
int main()
{
Area_Polygons a1;
a1.display();
}
