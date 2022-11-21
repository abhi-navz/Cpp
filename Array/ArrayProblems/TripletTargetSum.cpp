// Question: find the no of triplets in array whose sum is equal to a given value x.

#include<iostream>
using namespace std;

int main()
{
    cout << "Enter size of elements of array:" << endl;
    int n;
    cin >> n;
    int array[n];

    cout << "Enter array elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "Enter target sum:" << endl;
    int targetsum;
    cin>>targetsum;

    int triplet=0;
    for( int i=0; i<n; i++){
        for( int j=i+1; j<n; j++){
            for( int k=j+1; k<n; k++){
                if( array[i]+array[j]+array[k] == targetsum){
                    triplet++;
                }
            }
        }
    }

    cout<<"The number of triplets of "<<targetsum<<" in array is "<<triplet<<endl;
    return 0;
}