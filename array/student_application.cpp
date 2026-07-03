#include<iostream>
using namespace std;
int main()
{
   int n,sum=0,i;

   cout <<"How many students : ";
   cin >> n;
   int marks[n];

   for(int i=0;i<n;i++)
   {
        cout<<"Enter marks for student "<<i+1<<": ";
        cin>>marks[i];
        sum = sum + marks[i];
   }
   cout<<endl;
   cout<<"----------------";
   cout<<"\nSum : "<<sum<<endl;
   cout << "Average : "<<((float)sum/n)<<endl;
   
   int max = marks[0];
   int min = marks[0];


   for(i=1;i<n;i++){
        if(max<marks[i]){
            max = marks[i];
        }
        if(min>marks[i]){
            min = marks[i];
        }
   }

   cout <<"Max number : "<<max<<endl;
   cout<<"Min number :" << min << endl;
    cout<<"----------------";
    
}