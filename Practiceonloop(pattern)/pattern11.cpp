#include<iostream>
using namespace std;

int main()
{
    int m;
    cout<<"Enter no. of rows:"<<endl;
    cin>>m;

    for(int i=1; i<=m; i++)
    {
       for(int j=1; j<=m-i; j++){
        cout<<" ";
       }
       for(int k=i; k<=(2*i)-1; k++){
        if(i==1 || i==m || k==1 || k==m){
            cout<<k;
        }
       } cout<<endl;
    }
    return 0;
}