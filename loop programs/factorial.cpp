//Program : Factorial 
/* example : 5! = 5x4x3x2x1 */
#include<iostream>
using namespace std;
int main()
{
  int num , fact =1;
  cout<<"Enter number for calculate factorial : ";
  cin>>num;

  for(int i=1; i<=num; i++){
    fact = fact * i;
  }
  
  cout << "Factorial = "<<fact;
}
