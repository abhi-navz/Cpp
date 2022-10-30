                //    Print the pattern:
//                         1                
//                         12
//                         123
//                         1234


#include<iostream>
using namespace std;

int main()
{
    int m;
    cout<<"Enter the number of rows:"<<endl; 
    cin>>m;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}