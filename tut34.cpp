
//    *********************COPY CONSTRUCTOR******************----->>

#include<iostream>
using namespace std;

class number
{
   int a;
   public:
   number(){
    a=0;
   }
   number( int num)
   {
    a=num;
   }
   void display(void){ cout<<"The given number is "<<a<<endl;}

// A copy constructor is a type of constructor that creates a copy of another object. If we want one object to resemble another object we can use a copy constructor

number( number &obj){
    cout<<"copy constructor called!!!"<<endl;
    a= obj.a;
}
// If no copy constructor is written in the program compiler will supply its own copy constructor.
};

int main()
{
    number x, y, z(20), z2;
    x.display();
    y.display();
    z.display();
    number z1(z);
    z1.display();
    z2=x; // copy constructor will not be invoked here instead default copy cnstructor will be called;
    z2.display();
    number z3=y; // copy cnstructor will be called here;
    z3.display();
   
    return 0;
}