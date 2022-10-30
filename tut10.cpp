#include <iostream>

using namespace std;
int i = 1;

int main()
{
    // // loops in C++
    // there are theree types of loop in c++.
    // for, while, do while
    int n;
    cout << "Enter the number u want multiplication tabl of:" << endl;
    cin >> n;
    cout << endl;

    // program to write multiplication table using for loop:
    cout << "table using for loop" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << n * i << endl;
    }
    cout << endl;
    // progrma to print multiplication table using while loop
    cout << "table using while loop" << endl;

    while (i <= 10)
    {
        cout << n * i << endl;
        i++;
    }
    cout << endl;

    // cout << "table using do while looop" << endl;
    // do
    // {
    //     cout << n * i << endl;
    //     i++;
    // } while (i <= 10);

    return 0;
}