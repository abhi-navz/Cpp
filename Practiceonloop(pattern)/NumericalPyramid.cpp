                                //    Print the Pattern called as Numerical Pyramid:
                                //                    1
                                //                   121
                                //                  12321
                                //                 1234321

#include<iostream>
using namespace std;

int main()
{
    int m;
    cout<<"Enter the number of rows of pyramid:"<<endl;
    cin>>m;

    for(int i=1; i<=m; i++) // this loop will pass the control in next row:
    {
        for(int j=1; j<=m-i; j++){
            cout<<" ";   // this loop will print spaces: 
        }
        for(int k=1; k<=i; k++){
            cout<<k;       // this loop will print numericals in ascending order:
        }
        for(int l=(i-1); l>=1; l--){
            cout<<l; // this loop will print numericals in descending orderr:
        }

        cout<<endl;
    }
    return 0;
}