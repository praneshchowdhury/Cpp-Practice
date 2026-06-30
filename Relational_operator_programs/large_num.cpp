#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout << "Enter Two Number : ";
    cin >> num1 >> num2;

    if(num1>num2)
    {
        cout << "Large = "<<num1;
    }

    else if (num1<num2)
    {
        cout << "Large = "<<num2;
    }
    else
    cout << "Numbers are equal";
}