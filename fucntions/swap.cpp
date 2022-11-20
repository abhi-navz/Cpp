#include<iostream>
using namespace std;

void Swap( int &a, int &b){
    int temp=a;
    a=b;
    b=temp;

}

int main()
{
    int a=5, b=6;
    Swap(a,b);
    cout<<a<<" "<<b;
    return 0;
}