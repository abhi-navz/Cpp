#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the number of rows and coloumns:-" << endl;
    cin >> m >> n;

    cout << "Enter Array Elements:-" << endl;
    int array[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> array[i][j];
        }
    }

    cout << "The Array is:-" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}