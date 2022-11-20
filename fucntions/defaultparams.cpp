#include<iostream>
using namespace std;

int sum( int a, int b=1, int c=2)
{
    return (a+b+c);
}

int main()
{
    cout<<sum(5)<<endl;
    cout<<sum(5,2)<<endl;
    cout<<sum(5,2,3)<<endl;

    return 0;
}