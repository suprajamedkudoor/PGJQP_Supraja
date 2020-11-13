#include<iostream>
using namespace std;
class Train_Booking
{
char name1[50],name2[10],name3[10];
int booking1,booking2,booking3;
public: void details()
{
cout<<"enter passenger details:";
cin>>name1>>name2>>name3;
cout<<"enter booking no:";
cin>>booking1>>booking2>>booking3;
}
void status()
{
cout<<"\nTickets which are confirmed:\n"<<name1<<endl<<name3;
cout<<"\nFollowing tickets are in waiting list\n"<<name2<<endl;
}
void print()
{
cout<<"\nConfirmed list:\n"<<name1<<endl<<name3;
cout<<"\nFollowing tickets are in waiting list\n"<<name2<<endl;
}
};
int main()
{
Train_Booking t1;
t1.details();
t1.status();
t1.print();
}
