// ********Constructor Overloading:*********8
#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    complex()
    {
        a = 0;
        b = 0;
    }
    void display(void)
     {
         cout << "The complex number is " << a << "+" << b << "i" << endl;
    }
};

int main()
{ 
    complex c1(3,4);
    c1.display();
    complex c2(5);
    c2.display();
    complex c3;
    c3.display();

    return 0;
}
//  a consturctor  will be called as per the argument, it same as function overlodading: