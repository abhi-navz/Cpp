#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter ur age to check if you can vote:" << endl;
    cin >> age;
    // // if else statement in c++:

    // if (age < 18)
    // {
    //     cout << "YOu cannot vote:" << endl;
    // }
    // else if (age == 18)
    // {
    //     cout << "You can vote from next year:" << endl;
    // }
    // else if((age>18)&&(age<99))
    // {
    //     cout << "you can cast ur vote" << endl;
    // }
    // else
    // {
    //     cout<<"you are probably not alive to vote:"<<endl;
    // }

    // switch case statement:

    switch (age)
    {
    case 18:
        cout << "you are 18 and can cast vote" << endl;
        break;
    case 10:
        cout << "you are 10, you can't vote yet" << endl;
        break;
    case 100:
        cout << "you are probably dead to vote:" << endl;
        break;
    default:
        cout << "No result" << endl;
        break;
    }
    cout << "out of switch case control structure" << endl;

    return 0;
}