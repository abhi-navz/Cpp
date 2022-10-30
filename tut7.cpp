#include<iostream>
using namespace std;
int c = 45;
int main()
{
    int a,b,c;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    c = a+b;
    cout<<"The sum of a and b is "<<c<<endl;
    cout<<"the value of global c is "<<::c<<endl; // :: is known as scope resolution operator.

    //reference variable
    // Abhinav ---> Abhi ---> sandeep ---> monish. : names of same person.
    float x =34.4;
    float &y = x;
    cout<<y<<endl;

    // typecasting
     float f = 45.45;
     cout<<"The value of f converted to int is "<<int(f)<<endl;


    return 0;

}