#include<iostream>
using namespace std;
class GreaterEx
{
    int num1,num2,num3;
public: void Check_greater()
{
cout<<"enter three no";
cin>>num1>>num2>>num3;
if(num1>num2&&num1>>num3)
{
cout<<"num1 is greater";
else if(num2>num1&&num2>num3)
{
cout<<"num2 is greater";
else
{
cout<<"num3 is greater";
}
}
}
}
};
int main()
GreaterEx g1;
g1.Check_greater();
}
