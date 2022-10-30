// ************structure , union and enum:**************

// STRUCTURE:

#include <iostream>
using namespace std;

int main()
{
    //    typedef struct student
    //     {
    //         char name[10];
    //         int rn;
    //         float perc;
    //     } std;
    //     struct student s1{ "manisha", 21, 95.5};

    //     cout<<"the name of s1 is "<<s1.name<<endl;
    //     cout<<"the roll no  of s1 is "<<s1.rn<<endl;
    //     cout<<"the percentage  of s1 is "<<s1.perc<<endl;
    //     cout<<endl;
    //     std s2{"Abhishek",11, 95.7};
    //     cout<<"the name of s2 is "<<s2.name<<endl;
    //     cout<<"the roll no  of s2 is "<<s2.rn<<endl;
    //     cout<<"the percentage  of s2 is "<<s2.perc<<endl;

    // UNION
    // typedef union student
    // {
    //     char name[10];
    //     int rn;          // only on of the member can be use at once in union as memorey is shared among them.
    //     float perc;     // union is used specifically when one out of all member have to be used as per situation.
    // } std;

    // std s1{21};
    // //cout<<"the name of s1 is "<<s1.name<<endl;
    // cout<<"the roll no  of s1 is "<<s1.rn<<endl;

    enum children
    {
        Nisha,
        Abhinav,
        Manisha,
        Abhishek,
        Kabir
    };
    cout << Kabir << endl;
    children n = Kabir;
    cout << n;

    return 0;
}