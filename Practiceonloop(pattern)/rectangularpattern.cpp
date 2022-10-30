#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter number of rows and coloumn of the pattern:"<<endl;
    cin>>m;
    cin>>n;
    for(int i=0; i<m; i++)
    {
        for( int j=0; j<n; j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }

    return 0;
}    
