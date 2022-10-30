#include<iostream>
using namespace std;

int main()
{
    int num, first = 0, second=1, next;
    cout<<"enter the number of terms in fibonacci series you want"<<endl;
    cin>>num;
    cout<<"fibonacci series"<<endl;
    for (int i = 0; i < num; i++)
    {
        cout<<first<<endl;
        next = first+second;
        first=second;
        second=next;
        
    }
    
    
    return 0;
}