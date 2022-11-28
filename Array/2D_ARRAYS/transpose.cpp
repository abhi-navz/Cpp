#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter the dimensions of the matrix"<<endl;
    cin>>m>>n;
    int a[m][n];
    cout<<"Ente the matrix elements:"<<endl;
    for(int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
   
   cout<<"The transpose of the matrix is: "<<endl;
   int Transpose[n][m];
   for(int i=0; i<n; i++){
        for (int j=0; j<m; j++){
           Transpose[i][j]= a[j][i];
        }
    }

    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout<<Transpose[i][j]<<" ";
        }cout<<endl;
    }
    



    return 0;
}