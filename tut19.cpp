// Function Overloading in C++
// Function overloading is a process to make more than one function with the same name
//  but different parameters, numbers, or sequence.

#include <iostream>
using namespace std;

// fuction volume to find volume of cylinder-->
float volume(double r, int h)
{
    return (3.14 * r * r * h);
}
// fuction volume to find volume of cube--> 
int volume(int s)
{
    return (s * s * s);
}
// fuction volume to find volume of cuboid-->
int volume(int l, int b, int h)
{
    return (l * b * h);
}
int main()
{
    cout << "The volume of  a cylinder with radius 4 and height 6 is " << volume(4, 6) << endl;
    cout << "The volume of  a cube with side 8 is " << volume(8) << endl;
    cout << "The volume of  a cuboid  with side 3,5,7, as lenth breath and height respectively is " << volume(3, 5, 7) << endl;

    return 0;
}