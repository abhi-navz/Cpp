//  In pass by value the actual value is copied to another variable, and the copy is then passed to the fucntion, actual variable remain same.

#include <iostream>
using namespace std;

void changevalue(int z)
{
    z = 100;
    cout << z << endl;
}

int main()
{
    int a = 5;
    changevalue(a);
    cout << a; // Here 5 will print, coz z,  doesn't have any scope in in main fuction. the value of a is copied to z but acutal vaue of a remained same.
    return 0;
}