// Question: Sort an array conisting of zeros and one only. 
#include<iostream>
#include<vector>
using namespace std;

void SortZerosandOnes( vector<int> &v){
    int count_zeros=0;
    for(int i=0; i<v.size(); i++){
        if(v[i]==0){
            count_zeros++;
        }
    }
    for(int i=0; i<v.size(); i++){
        if(i<count_zeros){
            v[i]=0;
        }
        else{
            v[i]=1;
        }
    }
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