// program to reverse the order of digits of a given number:
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;

    int reverse=0;

    while(n>0){
             int lastdigit=n%10;
             reverse= (reverse*10)+(lastdigit);
             n/=10;
    }
    cout<<"The reverse of the given number is "<<reverse;
    return 0;
}