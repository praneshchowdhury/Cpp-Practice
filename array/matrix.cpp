#include<iostream>
using namespace std;
int main()
{
    int i,j,numOfRows,numOfCols,mat1[10][10];
    cout<<"Enter row & column for Matrix A: ";

    cin>>numOfRows>>numOfCols;

    
    for(i=0;i<numOfRows;i++){
        for(j=0;j<numOfCols;j++)
        {
            cout<<"A["<<i<<"]"<<"["<<j<<"]";
            cin>>mat1[i][j];
        }
    }
    cout<<"Matrix A = ";
    for(i=0;i<numOfRows;i++){
       
        for(j=0;j<numOfCols;j++)
        {
            cout<<mat1[i][j];
        }

        cout<<"\n";
         cout<<"\t";
    }
}
