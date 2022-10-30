//*********** Pointers in C++  ************//
// pointer is a variable data type  which stores adress of other variables.

#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int *b = &a; //(*----> is derefrerence operatore and & ------------> is addressof operator)

    cout << "The adress of a is " << &a << endl;
    cout << "The adress of a is " << b << endl;
    cout << "the value at adress b is " << a << endl;
    cout << "the value at adress b is " << *b << endl;
    cout << endl;

    // pointer to pointer: its a pointer variable storing adress of another pointer.
    int **c = &b;
    cout << "the adress of b is " << &b << endl;
    cout << "the adress of b is " << c << endl;
    cout << "the value stored at adress c is " << *c << endl;
    cout << "the value at adress (adress of b ) is " << *(*c) << endl;

    return 0;
}