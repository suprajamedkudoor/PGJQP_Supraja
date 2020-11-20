#include<iostream>
using namespace std;
class Palindrome
{
int num,n,n1,rev=0;
public: void display()
{
cout<<"enter a number";
cin>>num;
n=num;
do
{
n1=num%10;
rev=rev*10+n1;
num=num/10;
} while(num!=0);
cout<<"the reverse of the number is:"<<rev<<endl;
if(n==rev)
{
cout<<"the number is palindrome:";
}
else
{
cout<<"the number is not a palindrome:";
}
}
};
int main()
{
Palindrome p1;
p1.display();
}
