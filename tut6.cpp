//    1>. system header files(comes with the compiler itself).
#include<iostream>
//    2>. user defined Header files: (written by programmer).
#include"test.h"

using namespace std;



int main()
{
   //cout<<"This is hello world program\n"; 
   cout<<"Operators in C++" <<endl;
   cout<<"Airthmetical oprator:"<<endl;
   int a =4, b=6;
   cout<<"The value of a+b is is " <<a+b<<endl;
   cout<<"The value of a-b is is "<<a-b<<endl;
   cout<<"The value of a*b is is "<<a*b<<endl;
   cout<<"The value of a/b is is "<<a/b<<endl;
   cout<<"The value of a%b is is "<<a%b<<endl;
   cout<<"The value of a++ is is "<<a++<<endl;
   cout<<"The value of a-- is is "<<a--<<endl;
   cout<<"The value of ++a is is "<<++a<<endl;
   cout<<"The value of --a is is "<<--a<<endl;
   cout<<endl;

   cout<<"Comparison Operator:"<<endl;
   cout<<"The value of a==b is " <<(a==b)<<endl;
   cout<<"The value of a!=b is " <<(a!=b)<<endl;
   cout<<"The value of a<=b is " <<(a<=b)<<endl;
   cout<<"The value of a>=b is " <<(a>=b)<<endl;
   cout<<"The value of a>b is " <<(a>b)<<endl;
   cout<<"The value of a<b is " <<(a<b)<<endl;
   cout<<endl;

   cout<<"Logical Operator"<<endl;
   cout<<"The value of (a<b)&&(a>b) is "<<((a<b)&&(a>b))<<endl;
   cout<<"The value of !(a<b)&&(a>b) is "<<!((a<b)&&(a>b))<<endl;
   cout<<"The value of (a<b)||(a>b) is "<<((a<b)||(a>b))<<endl;
   cout<<"The value of !(a<b)||(a>b) is "<<!((a<b)||(a>b))<<endl;


    return 0;
}