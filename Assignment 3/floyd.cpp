#include<iostream>
using namespace std;
class Floyd
{
int rows, number=1;
public: void display()
{
    cout<<"enter no of rows";
    cin>>rows;
for(int i=1;i<=rows;i++)
{
for(int j=1;j<=i;j++)
{
cout<<number<<"";
number++;
}
cout<<endl;
}
}
};
int main()
{
Floyd f1;
f1.display();
}
