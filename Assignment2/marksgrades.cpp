#include<iostream>
using namespace std;
class Grades
{
int marks;
public: void display()
{
cout<<"enter marks";
cin>>marks;
if(marks>=90)
{
cout<<"Secured A grade";
}
else if(marks>=80 && marks<90)
{
cout<<"Secured B grade";
}
else if(marks>=60 && marks<80)
{
cout<<"Secured C grade";
}
else if(marks>=45 && marks<60)
{
cout<<"Secured D grade";
}
else
{
cout<<"fail";
}
}
};
int main()
{
Grades g1;
g1.display();
}
