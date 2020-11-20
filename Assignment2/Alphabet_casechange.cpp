#include<iostream>
using namespace std;
class Alphabet_casechange
{
char ch;
public: void display()
{
cout<<"Enter any Alphabet:\n";
cin>>ch;
if(ch>='a'&&ch<='z')
{
cout<<"\nYou Entered A Lowercase Alphabet\n";
ch=ch-32;
cout<<"\n The Uppercase alphabet is"<<ch;
}
else
{
cout<<"\n You entered a Uppercase Alphabet\n";
ch=ch+32;
cout<<"\n The Lowercase Alphabet is"<<ch;
}
}
};
int main()
{
Alphabet_casechange a1;
a1.display();
}
