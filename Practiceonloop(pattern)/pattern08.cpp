//                                 printing the pattern 

//                                        121212
//                                        212121
//                                        121212
//                                        212121

#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter the number of rows and coloumns:"<<endl;
    cin>>m>>n;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if ((i+j)%2==0)
            {
                cout<<1;
            }
            else{
                cout<<2;
            }
            
        }
        cout<<endl;
    }
  

    return 0;
}