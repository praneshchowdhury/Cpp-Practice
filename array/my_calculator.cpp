#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0,mul=1;
    char op;
   
    cout<<"How many numbers for input : ";
    cin>>n;

    int arr[n];



    for(i=0;i<n;i++){
        cout<<"Enter Number "<<i+1<<": ";
        cin>>arr[i];
    }

     cout<<"Select Operator : (+,*) ";
    cin>>op;

    switch(op)
    {
        case '+':

    for(i=0;i<n;i++){
        sum = sum + arr[i];
    }
    cout<<"Sum = "<<sum;
    break;

    case '*':
        
    for(i=0;i<n;i++){
        mul = mul * arr[i];
    }

    cout<<"Mul = "<<mul;
    break;

    default:
    cout<<"Invalid Input";

}
}