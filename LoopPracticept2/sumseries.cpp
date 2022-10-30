// program to find the sum of a given sereis: 1-2+3-...n;
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the last term:"<<endl;
    cin>>n;

     int result=0;
    for(int i=1; i<=n; i++)
    {
        if(i%2==0){
            result-=i;
        } else{
            result+=i;
        }
    }
    cout<<"The result is "<<result<<endl;
    
    return 0;
}