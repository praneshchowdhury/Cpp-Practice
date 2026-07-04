//Program : 1 + 1/2 + 1/3 + 1/4 + . . .1/n = ?
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    float sum=0;
    cout<<"Enter last number for this series: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        sum = sum + (float)1/i;
    }

      cout<<"1 + 1/2 + 1/3 + ..."<<" + 1/"<<n<<" = "<<sum;
}