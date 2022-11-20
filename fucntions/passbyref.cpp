// In pass by reference the reference of actual variable is passed using & operator and gets chgned as per the funtion. 

#include<iostream>
using namespace std;
void ChangeValue( int &z)
{
    z=100;
    
}

int main()
{
    int a =5;
    ChangeValue(a);
    cout<<a;

    return 0;
}