// funcitin and funtion prototype:
#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b; // a and b are formal parameters and will take values from acutal parameter
    return c;
}
void g()
{
    cout << "hello Abhinav"; // a function needs not to have a parameter , for instnace this is a void type and takes no parameters.
}

int main()
{
    int n1, n2;
    cout << "Enter first number:\n";
    cin >> n1;
    cout << "Enter second number:\n";
    cin >> n2;
    cout << "the sum of two numbers is " << sum(n1, n2) << endl;
    // n1 and n2 are actual parametes:
    g();

    return 0;
}