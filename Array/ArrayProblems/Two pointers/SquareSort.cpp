//Question: Given an array integr "a" sorted in non decreasing order, Return an rray of squares of each number sorted in non decrasing orederl. 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void SquarerSorted( vector<int> v ){
    vector<int> ans;{}
    int left_ptr=0;
    int right_ptr=v.size()-1;

    while(left_ptr<=right_ptr){
        for( int i=0; i<v.size(); i++){
            if(abs(v[left_ptr])<abs(v[right_ptr])){
                ans.push_back(v[right_ptr]*v[right_ptr]);
                right_ptr--;
            }
            else{
                ans.push_back(v[left_ptr]*v[left_ptr]);
                left_ptr++;
            }
        }
    }

  reverse(ans.begin(), ans.end());

    for(int i=0; i<v.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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

    cout<<"The new sorted array:"<<endl;
    SquarerSorted(v);


    return 0;
}