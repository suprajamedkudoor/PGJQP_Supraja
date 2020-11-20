#include<iostream>
using namespace std;
class Alphabet
{
char ch;
public: void display()
{
cout<<"enter a character";
cin>>ch;
if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
{
cout<<"entered character is an Alphabet";
}
else
{
cout<<"enter character is not an alphabet";
}
}
};
int main()
{
Alphabet b1;
b1.display();
}
