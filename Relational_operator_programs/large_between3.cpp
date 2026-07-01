#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;

    cout<<"Enter Three Numbers : ";
    cin >> num1>>num2>>num3;

    if (num1>num2 && num1>num3){
        cout << "Large = "<<num1;
    }

    else if (num2>num1 && num2>num3){
        cout << "Large = "<<num2;
    }

    else if (num3>num2 && num3>num1){
        cout << "Large = "<<num3;
    }

    else
    cout<<"Numbers are equal";
}