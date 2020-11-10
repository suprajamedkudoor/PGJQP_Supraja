#include<iostream>
using namespace std;
class TicketBooking
{
	char passengername1[10]
	int aadhar num, booking ID, mobile number;
	public: void Booking()
	{
		cout<<"enter passengername1";
		cout<<"enter aadhar num";
		cout<<"enter mobile number";
		cin>>"passengername1";
		cin>>"aadhar num";
		cin>>"mobile number";
	}
	public: void Status()
	{
		cout<<"enter the ticket has been confirmed or not:\n";
		cin>>"Ticket has been confirmed or in waiting list:\n";
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
