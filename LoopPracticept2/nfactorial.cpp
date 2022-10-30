// prograrm to print factorial of a given number;
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number you want factorial to:"<<endl;
    cin>>n;
    int fact=1;
    for(int i=1; i<=n; i++){
        fact*=i;
        cout<<fact<<endl; // It'll print factorial of all number from 1 to n:
    }
    

    return 0;
}