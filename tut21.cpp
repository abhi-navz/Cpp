#include <iostream>
#include <string>
using namespace std;

class family
{
private:
    int salary;
    string gf_name;

public:
    int age;
    string studyfield;
    float height;
    void setdata(int s, string g);
    void getdata()
    {
        cout << "the salary of Abhishek is " << salary<<", ";
        cout << "the name of his  gf is " << gf_name<<" , ";
        cout << " his age is " << age<<" , " ;
        cout << " he is studying " << studyfield<<" , " ;
        cout << " and his  height is " << height << "cm.";
    }
};
    void family ::setdata(int s, string g)
    {
        salary = s;
        gf_name = g;
    }

int main()
{
    family Abhishek;
    Abhishek.age = 16;
    Abhishek.studyfield = "commerce";
    Abhishek.height = 172.54;
    Abhishek.setdata(15000, "abc");
    Abhishek.getdata();

    return 0;
}