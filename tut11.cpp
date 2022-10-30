//                      /***************BREAk and continue:**************/
#include <iostream>
using namespace std;

int main()
{
    cout << "break statement:" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
        if (i == 2)
        {
            break;
        }
    }
    cout << endl;
    cout << "continue statement:" << endl;
    for (int i = 1; i <= 10; i++)
    {
        if (i == 2)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}