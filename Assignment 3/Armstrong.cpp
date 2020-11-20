#include<iostream>
using namespace std;
class Armstrong
{
int num, originalNum, remainder, result = 0;
public: void display()
{
    cout<<"Enter a number:";
    cin>> num;
    originalNum=num;

    while(originalNum != 0) {

        remainder=originalNum % 10;

        result +=remainder*remainder*remainder;

        originalNum /= 10;
    }

    if (result == num)
    {

        cout <<" is an Armstrong number."<<num;
        }
    else
    {
        cout << "is not an Armstrong number."<<num;
        }

}
};
int main()
{
Armstrong a1;
a1.display();
}
