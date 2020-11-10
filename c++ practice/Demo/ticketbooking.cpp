#include<iostream>
using namespace std;
class TicketBooking
{
	public: void Booking()
	{
		cout<<"enter passenger name";
		cout<<"enter aadhar number";
		cin>>"passenger name";
		cin>>"aadhar number";
	}
	public: void Status()
	{
		cout<<"enter the ticket has been confirmed or not";
		cin>>"Ticket has been confirmed or in waiting list";
	}
	public: void Print()
	{
		cout<<"enter the list of passengers whose ticket got confirmed";
		cin>>"list of the confirmed passengers";
	}
	};
	int main()
	{
		Ticketbooking d1;
		d1.Booking();
		d1.Status();
		d1.Print();
	}
