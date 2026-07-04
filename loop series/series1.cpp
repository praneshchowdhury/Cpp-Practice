//Program : 1 + 2 + 3 + 4 + . . . + n = ?
#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout <<"Enter last number : ";
    cin>> n;

    for(i=1;i<=n;i++)
    {
        sum = sum + i;
    }

    cout<<"1 + 2 + 3 + ..."<<" + "<<n<<" = "<<sum;
}