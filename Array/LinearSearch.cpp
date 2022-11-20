// Search if a given Element is present in the array or not , if it's not return -1 or if it's present return index value.

#include <iostream>
using namespace std;

int main()
{
   cout << "Enter the number of array elements:" << endl;
   int n;
    cin >> n;
    int  array[n];
    cout << "Enter Array elemtns:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    int key;
    cout << "Enter the key:" << endl;
    cin >> key;
    int res = -1;
    for (int i = 0; i < 5; i++)
    {
        if (array[i] == key)
        {
            res = i;
            break;
        }
    }
    cout <<"the Result is " <<res;
    return 0;
}