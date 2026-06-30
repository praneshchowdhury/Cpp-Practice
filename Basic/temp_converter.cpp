#include<iostream>
using namespace std;
int main()
{
    float temp,fern;
    cout << "Enter fernheit temperature";
    cin >> fern;

    temp = (fern-32)/1.8;
    cout<< "Celcius : "<<temp;    
}