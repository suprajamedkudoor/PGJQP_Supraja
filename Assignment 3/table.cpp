#include<iostream>
using namespace std;
class Table
{
int i,n;
public: void display()
{
cout<<"enter a number";
cin>>n;
for(i=1;i<=10;i++)
{
cout<<n*i<<"\n";
}
}
};
int main()
{
Table t1;
t1.display();
}
