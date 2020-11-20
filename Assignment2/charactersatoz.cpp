#include<iostream>
using namespace std;
class Characters
{
char ch;
public: void display()
{
for(ch='A';ch<='Z';ch++)
{
cout<<ch<<"\n";
}
}
};
int main()
{
Characters c1;
c1.display();
}
