//Question: check if we can partition an array into two subarrays with equal sum, More formally check if prefix sum of a part of  the array is equal to the suffix sum of the rest of the array;-
#include<iostream>
#include<vector>
using namespace std;

bool CheckPrefixSuffixSum( vector<int> &v){
    int Totalsum=0;
    for(int i=0; i<v.size(); i++){
         Totalsum+=v[i];
    }
    int PrefixSum=0;
    for(int i=0; i<v.size();i++){
        PrefixSum+=v[i];
        int suffix_sum=Totalsum-PrefixSum;

        if(PrefixSum==suffix_sum){
            return true;
        }
    }
    return false;
}
int main()
{
    cout<<"Enter the size of the array:-"<<endl;
    int n; cin>>n;
    vector<int> v;
    cout<<"Enter array elements:-"<<endl;
    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
   
    cout<<"Does two subarrays of equal sum exists: "<<CheckPrefixSuffixSum(v); 

    return 0;
}
