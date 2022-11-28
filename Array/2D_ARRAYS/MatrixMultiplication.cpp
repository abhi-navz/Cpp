#include<iostream>
using namespace std;

int main()
{
    int r1,c1;
    cout<<"Enter dimesions of first matrix "<<endl;
    cin>> r1>>c1;
    cout<<"Enter element of first matrix "<<endl;
    int  m1[r1][c1];
    for( int i=0; i<r1; i++){
        for( int j=0; j<c1; j++){
            cin>>m1[i][j];
        }
    }
    cout<<endl;

    int r2,c2;
    cout<<"Enter dimesions of second matrix "<<endl;
    cin>> r2>>c2;
    cout<<"Enter element of second matrix "<<endl;
    int  m2[r2][c2];
    for( int i=0; i<r2; i++){
        for( int j=0; j<c2; j++){
            cin>>m2[i][j];
        }
    } cout<<endl;

    if( c1 != r2){
        cout<<"matrix multiplication not possible"<<endl;
    }

    int ans[r1][c2];

    for( int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            int value=0;
            for(int k=0; k<c1; k++){
                value+=m1[i][k]*m2[k][j];
            }
            ans[i][j]=value;
        }
    }
    cout<<"The resultant matrix is: "<<endl;
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            cout<<ans[i][j]<<" ";
        }cout<<endl;
    }
     
    return 0;
}