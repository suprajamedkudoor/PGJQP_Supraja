#include<iostream>
using namespace std;
class Area
{
float a;
public: void display()
{
cout<<"Enter the area";
cin>>a;
cout<<"result of a*a is:"<<a*a;
}
};
int main()
{
Area b1;
b1.display();
}

