// recursion and recursive function:
#include <iostream>
using namespace std;
// recursive function to find factorial of a number:
int factorial(int n)
{
    if (n < 2)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
// recursive funtion to find the nth term of a fibonacci series : 1,1,2,3,5,8,13....
int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}
int main()
{
    int num;
    // cout<<"Enter the number you want factorial of:"<<endl;
    // cin>>num;
    // cout<<"the factorial of "<<num<<" is "<<factorial(num)<<endl;

    cout << "Enter the value  you want fibonacci term at   :" << endl;
    cin >> num;
    cout << "the term at " << num << " is " << fib(num) << endl;

    return 0;
}