// We have to found the number of occurence greater than x:

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(6);
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < 6; i++)
    {
        cin >> v[i];
    }
    cout << "Enter x:" << endl;
    int x;
    cin >> x;
    int num = 0;
    for (int ele : v)
    {
        if (ele > x)
        {
            num++;
        }
    }

    cout << "The number of element greater than " << x << " is " << num;

    return 0;
}