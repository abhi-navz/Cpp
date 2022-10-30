// default argument of a constructor:

#include <iostream>
using namespace std;

class simple
{
    int data1, data2, data3;

public:
    simple(int a, int b = 4, int c = 8)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void display()
     {
         cout << "the value of data1 , data2 and data3 are " << data1 << " , " << data2 << " , " << data3 << endl;
     }
};

int main()
{
    simple s1(2, 3, 5);
    s1.display();
    simple s2(1);
    s2.display();
    simple s3(9, 8);
    s3.display();

    return 0;
}