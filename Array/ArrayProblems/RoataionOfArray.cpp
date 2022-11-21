//Question: Rotate a given array by k steps, k can be greater than n; where n is the size of array.
#include<iostream>
using namespace std;

int main()
{
    int array[]={ 1,2,3,4,5};
    int n=5;
    

    int k;
    cout<<"Enter the value of k"<<endl;
    cin>>k;

    int arrayans[5];
    int j=0;

    // if k is greater than n:
    k=k%n;

    // inserting last k elements in arrayans.
    for( int i=n-k; i<n; i++){
        arrayans[j++] = array[i];
    }

    //inserting first n-k elements in the  ansarray.
    for(int i=0; i<=k; i++){
        arrayans[j++]=array[i];
    }

    //printing ansarray[].
    for(int i=0; i<n; i++){
        cout<<arrayans[i]<<" ";
    }



    return 0;
}