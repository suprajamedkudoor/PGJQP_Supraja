#include<iostream>
using namespace std;
class Vowcon_scase
{
int choice;
public: void display()
{
cout<<"enter your choice";
cin>>choice;
switch(choice)
{
case 1: cout<<"a";
break;
case 2: cout<<"A";
break;
case 3: cout<<"e";
break;
case 4: cout<<"E";
break;
case 5: cout<<"i";
break;
case 6: cout<<"I";
break;
case 7: cout<<"o";
break;
case 8: cout<<"O";
break;
case 9: cout<<"u";
break;
case 10: cout<<"U";
break;
default: cout<<"Invalid choice";
}
}
};
int main()
{
Vowcon_scase v1;
v1.display();
}
