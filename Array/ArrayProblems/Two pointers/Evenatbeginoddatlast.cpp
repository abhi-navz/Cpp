//Questin: Given an array of integers 'a' . sort the array so that the even integers came in beginning followed by the odd integers. The relative position of even and odd integers doesn;t matter.

#include<iostream>
#include<vector>
using namespace std;

void SortEvenOdd( vector<int> &v){
    int left_ptr=0;
    int right_ptr=v.size()-1;
    while( left_ptr<right_ptr){
        if(v[left_ptr]%2 != 0 && v[right_ptr] %2 == 0){
            int temp=v[right_ptr];
            v[right_ptr]=v[left_ptr];
            v[left_ptr]=temp;
            left_ptr++;
            right_ptr--;
        }
        if(v[left_ptr] %2 == 0){
            left_ptr++;
        }
        if(v[right_ptr] %2 != 0){
            right_ptr--;
        }
    }
    return;
}

int main()
{
    vector<int> v;
    cout<<"Enter the size of array:"<<endl;
    int n;
    cin>>n;

    cout<<"Enter array Elements:"<<endl;
    int ele;
    for( int i=0; i<n; i++){
        cin>>ele;
        v.push_back(ele);   
    }

    SortEvenOdd(v);
    cout<<"The sorted Array is:"<<endl;
    for( int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}