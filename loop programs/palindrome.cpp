//Program : Palindrome number checker
#include<iostream>
using namespace std;
int main()
{
    int num,digit,reverse=0,num_copy;

    cout<<"Enter any number: ";

    cin>> num;
    num_copy = num;

    while(num_copy!=0)
    {
        digit = num_copy%10;
        reverse = reverse *10+digit;
        num_copy = num_copy /10;
    }
    
    if(num==reverse)
    {
        cout<<"Palindrome";
    }
    else{
        cout<<"Not palindrome";
    }
}
