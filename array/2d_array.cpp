#include<iostream>
using namespace std;
int main()
{
    int i,j,arr[2][3];

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {   
            cout<<"Enter Number for index["<<i<<"]"<<"["<<j<<"]: ";
            cin>>arr[i][j];
        }

    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}