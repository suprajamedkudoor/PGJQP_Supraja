#include<iostream>
using namespace std;
class Digits
{
     long n;
    int count = 0;
public: void display()
{
    cout<<"enter the value of N";
    cin>>n;
    while (n != 0) {
        n /= 10;
        ++count;
}
cout<<"number of digits is"<<count;
}
};
int main()
{
Digits d1;
d1.display();
}
