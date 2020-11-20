#include<iostream>
#include<cmath>
using namespace std;
class Quadratic_Equation
{
float a,b,c,x1,x2,dis,realpart,imaginarypart;
public: void display()
{
cout<<"enter coefficients a,b and c:";
cin>>a>>b>>c;
dis=b*b-4*a*c;
if(dis>0)
{
x1=(-b+sqrt(dis))/(2*a);
x2=(-b-sqrt(dis))/(2*a);
cout<<"Roots are real and different."<<endl;
cout<<x2<<x1<<endl;
}
else if(dis==0)
{
cout<<"roots are real and same"<<endl;
x1=-b/(2*a);
cout<<x1<<x2<<endl;
}
else
{
realpart=-b/(2*a);
imaginarypart=sqrt(-dis)/(2*a);
cout<<"roots are complex and differnt."<<endl;
cout<<x1<<realpart<<imaginarypart<<endl;
}
}
};
int main()
{
Quadratic_Equation q1;
q1.display();
}
