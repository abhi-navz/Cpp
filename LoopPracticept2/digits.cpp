// Counting the no of digits in a given number:
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number:" << endl;
    cin >> n;

    int digit = 0;
    while (n > 0)
    {
        digit++;
        n = n / 10;
    }
    cout << "The number in digits is " << digit << endl;
    return 0;
}