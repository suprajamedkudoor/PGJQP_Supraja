
#include<iostream>
using namespace std;
struct Student
{
char name[50];
int id;
};
int main()
{
Student record;
cout<<"enter student name:";
cin>>record.name;
cout<<"enter id:";
cin>>record.id;
cout<<"\nDisplaying information.";
cout<<"Name:"<<record.name;
cout<<"id:"<<record.id;
}

