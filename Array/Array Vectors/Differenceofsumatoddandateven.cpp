#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v(6);
    cout<<"Enter the array elements:"<<endl;
    for(int i=0; i<v.size(); i++){
        cin>>v[i];
    }

    int ans=0;
    for( int i=0; i<v.size(); i++)
    {
       if( i%2==0){
        ans+=v[i];
       }
       else{
        ans-=v[i];
       }
         
       
    }

    cout<<"The answer is:"<<ans<<endl;


    return 0;
}