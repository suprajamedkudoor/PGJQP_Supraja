#include<iostream>
using namespace std;
class Factorial_woutrecur
{
int i=1,fact=1,N;
public: void display()
{
cout<<"enter the N value";
cin>>N;
while(i<=N)
{
fact=fact*i;
i++;
}
cout<<"factorial of N is:"<<fact;
}
};
int main()
{
Factorial_woutrecur f1;
f1.display();
}
