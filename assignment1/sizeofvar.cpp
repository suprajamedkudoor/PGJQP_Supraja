#include<iostream>
using namespace std;
class SizeofVar
{
public: void display()
{
cout<<"size of char:"<<sizeof(char)<<"byte";
cout<<"size of int:"<<sizeof(int)<<"bytes";
cout<<"size of int:"<<sizeof(float)<<"bytes";
cout<<"size of int:"<<sizeof(double)<<"bytes";
}
};
int main()
{
SizeofVar d1;
d1.display();
}
