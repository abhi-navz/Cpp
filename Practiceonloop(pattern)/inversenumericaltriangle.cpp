
//                 //    Print the pattern:
// //                        4321
//                           321
//                           21
//                           1
#include<iostream>
using namespace std;

int main()
{
    int m;
    cin>>m;
    for(int i=1; i<=m; i++){
        for(int j=(m-i)+1; j>=1; j--){
            cout<<j;
        } cout<<endl;
    }
    return 0;
}