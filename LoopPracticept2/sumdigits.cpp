// Program to find the sum of digits of a given number:
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    // so we'll first separte the ;ast digits using modulo operator and dividing them by 10 one by one:
    int sum = 0;

    while (n > 0)
    {
        int lastdigit = n % 10; // will get the last digit from here as the remainder;
        sum = sum+lastdigit;       // it'll add the digit in every iteration:
        n = n / 10;
    }
    cout << "the sum of digits of the given number is " << sum;

    return 0;
}