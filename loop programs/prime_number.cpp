#include<iostream>
using namespace std;
int main()
{
    int num,i,count=0;
    cout<<"-----------------------\n"<<"Prime Number Checker\n"<<"-----------------------\n";
    cout<<"Enter any positive number: ";
    cin>>num;

    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }

    if(count==0)
    {
        cout<<"Prime Number";
    }
    else{
        cout<<"Not Prime Number";
    }
}