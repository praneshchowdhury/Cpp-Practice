#include<iostream>
using namespace std;
int main()
{
    int num;

    cout<< "Enter your number : ";
    cin >> num;

     if(num<0 || num>100)
    {
        cout << "Invalid input";
    }
    else if(num<33)
    {
        cout<< "Fail";
    }

    else if (num>33)
    {
        cout << "Pass";
    }
    

}