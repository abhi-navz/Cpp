#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    // Constant variable:

    const int d = 3;
   //a = 45; // can't be changed as a is a constant variable.
    cout<<"The value of a is "<<d;

    // MANIPULATORS IN C++

    int a=45, b=34;
    float c=35.45;

    //with endl:
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
    cout<<"the value of c is "<<c<<endl;
    cout<<endl;
    //with endl and setw:
    cout<<"the value of a with setw is "<<setw(6)<<a<<endl;
    cout<<"the value of b with setw is "<<setw(6)<<b<<endl;
    cout<<"the value of c with setw is "<<setw(6)<<c<<endl;

    


    return 0;
}