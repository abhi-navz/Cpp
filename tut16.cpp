#include <iostream>
using namespace std;
// Call by value.
// Call by value is a method in C++ to pass the values to the function arguments.
// In case of call by value the copies of actual parameters are sent to the formal parameter, which means that
// if we change the values inside the function that will not affect the actual values.

int sum(int a, int b)
{
    int c = a + b;
    return c;
}
// void swap(int a , int b){
//     int temp =a;
//     a=b;                                 
//     b = temp;
// }

// Call by Reference in C++
// Call by reference is a method in C++ to pass the values to the function arguments. In the case of call by reference, the reference of actual parameters is sent to the formal parameter,
//  which means that if we change the values inside the function that will affect the actual values

void swapref(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Call by Pointer in C++
// A call by the pointer is a method in C++ to pass the values to the function arguments. In the case of call by pointer, the address of actual parameters is sent to the formal parameter,
// which means that if we change the values inside the function that will affect the actual values

// Call by reference using pointers
void swappointer(int *a, int *b)
{                  // temp a b
    int temp = *a; // 4   4  5
    *a = *b;       // 4   5  5
    *b = temp;     // 4   5  4
}

int main()
{
    int x = 4, y = 6;
    cout << "sum of x and y is " << sum(x, y) << endl;
    cout << "The value of x is " << x << " and y is " << y << endl;
    // swap(x,y); // it did'nt swap the value of x any y. coz the copies of x and y are sent to a and b
    // and funtion is working on them , but x and y remain same:

    swapref(x, y); // it will swap the value of a and b , coz a and b being given the reference of x and y:
    cout << "The value of x is " << x << " and y is " << y << endl;

    swappointer(&x, &y);
    cout << "the value of x is " << x << " and y is " << y << " after swapping through pointer  ";
    // not working for some reason?

    return 0;
}