#include<iostream>
using namespace std;
class Fabinocci
{
int n1=0,n2=1,n3,i,number;
public: void display()
{
cout<<"Enter the number of elements: ";
 cin>>number;
 cout<<n1<<" "<<n2<<" ";
 for(i=2;i<number;++i)
 {
  n3=n1+n2;
  cout<<n3<<" ";
  n1=n2;
  n2=n3;
 }
}
};
int main()
{
Fabinocci f1;
f1.display();
}

