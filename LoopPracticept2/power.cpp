// program to find a to the power b;
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the base"<<endl;
    cin>>a;
    cout<<"Enter the Power"<<endl;
    cin>>b;

    int result=1;

    for(int i=1; i<=b; i++){
        result = result*a;
    }
    cout<<"the Result is "<<result;

    return 0;
}