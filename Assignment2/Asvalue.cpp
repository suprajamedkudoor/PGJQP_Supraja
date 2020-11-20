#include<iostream>
using namespace std;
class Asvalue
{
int num;
char ch;
public: void display()
{
cout<<"enter a character";
cin>>ch;
num=ch;
cout<<"Ascii value is:"<<num;
}
};
int main()
{
Asvalue a1;
a1.display();
}
