#include<iostream>
using namespace std;

int main()
{
    int m;
    cout<<"Enter the number of rows of rectangular number pattern:"<<endl;
    cin>>m;

    for (int i = 1; i <=m; i++)
    {
        for (int j = i; j <=m; j++)
        {
            cout<<j;
        }
        for (int k = 1; k <=(i-1); k++)
        {
            cout<<k;
        }
        cout<<endl;
        
        
    }
    
    return 0;
}