#include<iostream>
using namespace std;
int main()
{
    int num[20],n;

    cout<< "How many numbers : ";
    cin>> n;
    for(int i=0;i<n;i++){
        cout<<"Enter number "<<i+1<<": ";
        cin>>num[i];
    }
    cout<<"Numbers are : ";
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
    
}