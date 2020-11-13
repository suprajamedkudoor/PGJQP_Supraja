#include<iostream>
using namespace std;
class UserNum
{
int num;
public: void display()
{
cout<< "enter a integer:";
cin>>num;
cout<<"you entered"<<num;
}
};
int main()
{
    UserNum d1;
    d1.display();
}
