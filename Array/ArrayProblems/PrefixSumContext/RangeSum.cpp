// Question: Given an array of integers of size n. Answer q queries where you need to print the sum of values in a given range of indices from l to r(both included).
#include<iostream>
#include<vector>
using namespace std;

int main()
{
     cout<<"Enter the size of the array:"<<endl;
     int n; cin>>n;

     vector<int> v(n+1,0);
     cout<<"Enter array elements:"<<endl;
     for(int i=1; i<=n; i++){
        cin>>v[i];
     }
     //Calculating prefix array

     for(int i=0; i<=n; i++){
        v[i]+=v[i-1];
     }

     cout<<"Enter number of queries:"<<endl;
     int q; cin>>q;

     while(q--){
        cout<<"Enter l and r respectively:"<<endl;
        int l,r; cin>>l>>r;
        //ans = prefixsumarray[r]-prefixsumarray[l-1];
        int ans=0;
        ans=v[r]-v[l-1];
        cout<<"The result is:"<<ans<<endl;
        
        
     } 

     

    return 0;
}