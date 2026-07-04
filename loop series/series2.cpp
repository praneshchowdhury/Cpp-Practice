//Program : 1^2 + 2^2 + 3^2 + 4^2 + . . .n^2 = ?
#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;

    cout<<"Enter last number of this series : ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        sum = sum + i*i;
    }
    cout<<"1^2 + 2^2 + 3^2 + ... + "<<n<<"^2 = "<<sum;
}