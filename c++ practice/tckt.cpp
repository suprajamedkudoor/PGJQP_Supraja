#include<iostream>
using namespace std;
class Ticket
{
    char name1[10];
    int booking_id1
    public: void booking()
    {
        cout<<"enter the name of the passenger"\n";
        cin>>"name1";
        cout<<"enter the booking_id1;
        cin>>"booking_id1";
    }
    void status()
    {
        cout<<"enter ticket has confirmed:\n"<<name1;
        cin<<"\n waiting list:\n";
    }
    int print()
    {
        cout<<"\n confirmed list:\n"<<name1;
        cout<<"\n waiting list:\n";
    }
};
    int main()
    {
        Ticket g1;
        g1.booking();
        g1.status();
    }
