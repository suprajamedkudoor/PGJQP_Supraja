#include<iostream>
using namespace std;
class Consonant_Vowel
{
char ch;
public: void display()
{
cout<<"enter a character";
cin>>ch;
if((ch=='a')||(ch='A')||(ch='e')||(ch='E')||(ch='i')||(ch='I')||(ch='o')||(ch='O')||(ch='u')||(ch='U'))
{
cout<<"It is a vowel";
}
else
{
cout<<"It is a consonant";
}
}
};
int main()
{
Consonant_Vowel c1;
c1.display();
}
