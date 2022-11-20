#include<iostream>
using namespace std;

int main()
{
     int n;
    cout << "Enter the number of array elements:" << endl;
    cin >> n;
    int  array[n];
    cout << "Enter Array elemtns:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    int max=array[0];
    for(int i=0; i<n; i++)
    {
        if( array[i]>max)
        {
            max=array[i];
        }
    }
    cout<<"The max value  Elements is "<<max;
    return 0;
}