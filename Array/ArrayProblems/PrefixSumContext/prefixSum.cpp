// Question: Given an integer arrray "a", return the prefix/running sum in the same array without creating a new array:-       ex: [ 5,4,3,2,1] it's prefix sum or running sum: [ 5, 9, 12.14, 15]  i.e. nth position= sum of all elements before and at nth position. 
#include<iostream>
#include<vector>
using namespace std;

void PrefixSum( vector<int> &v ){
    for( int i=1; i<v.size(); i++){
        v[i]=v[i-1]+v[i];
    }

    cout<<"The new running sum array is:-"<<endl;
    for( int i=0; i<v.size(); i++){
       cout<<v[i]<<" ";
    }

}

int main()
{
    vector<int> v;
    cout<<"Enter the size of array:-"<<endl;
    int n; cin>>n;

    cout<<"Enter the array elements:-"<<endl;
    for( int i=0; i<n; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

  PrefixSum(v);

    return 0;
}