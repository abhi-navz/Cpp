// Question: Sort an array conisting of zeros and one only. 
#include<iostream>
#include<vector>
using namespace std;

void SortZerosandOnes( vector<int> &v){
    int left_ptr=0;
    int right_ptr=v.size()-1;

    while( left_ptr<right_ptr){
        if(v[left_ptr]==1 && v[right_ptr]==0){
            v[left_ptr++]=0;
            v[right_ptr--]=1;

        }
        if(v[left_ptr]==0){
            left_ptr++;
        }
        if(v[right_ptr]==1){
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

    SortZerosandOnes(v);
    cout<<"The sorted Array is:"<<endl;
    for( int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
    
}