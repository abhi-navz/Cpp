#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of array elements:" << endl;
    cin >> n;
    int  array[n];
    cout << "Enter Array elemtns:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    cout << "The sum of all array elements are:" << sum << endl;
    return 0;
}