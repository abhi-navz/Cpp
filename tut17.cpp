#include<iostream>
using namespace std;

// Inline Functions in C++
// Inline functions are used to reduce the function call. When one function is being called multiply times in 
// the program it increases the execution time, so inline function is used to reduce time and increase 
// program efficiency. If the inline function is being used when the function is called, the inline function 
// expands the whole function code at the point of a function call, instead of running the function. 
// Inline functions are considered to be used when the function is small otherwise it will not perform well.
// Inline is not recommended when static variables are being used in the function

inline int product(int a, int b){
    return a*b;
}

// Default Arguments in C++
// Default arguments are those values which are used by the function if we don’t input our value. 
// It is recommended to write default arguments after the other arguments.
 float netmoney( int basic,  float factor = 1.015){
    return basic*factor;
 }

// Constant Arguments in C++
// Constant arguments are used when you don’t want your values to be changed or modified by the function.
// An example of constant arguments is shown in Code Snippet 4.

int strlen(const char *p){
}
// As shown in Code Snippet 4, we created a “strlen” function which takes a constant argument “p”.
// As the argument is constant so its value won’t be modified.

int main()
{
    int x =4,y=8;
     cout<<"the product of x and y is "<<product(x,y)<<endl;
    // cout<<"the product of x and y is "<<product(x,y)<<endl;
    // cout<<"the product of x and y is "<<product(x,y)<<endl;
    // cout<<"the product of x and y is "<<product(x,y)<<endl;
    // cout<<"the product of x and y is "<<product(x,y)<<endl;

    int b1 = 1000; 
    cout<<"if you have "<<b1<<" rs, then net maoney you would get is "<<netmoney(b1)<<endl;
    int b2 = 10000; // suppose for money over 10000 , the factor is 1.05. 
    cout<<"if you have "<<b2<<" rs , then net money you'd get will be "<<netmoney(b2,1.05)<<endl;
    
  
    return 0;
}