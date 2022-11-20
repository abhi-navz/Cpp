#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v(6);
    cout<<"Enter array elements:"<<endl;
    for( int i=0; i<6; i++){
        cin>>v[i];
    }
    

    bool sortedflag = true;
    for( int i=1; i<v.size(); i++){
        if( v[i]>v[i-1]){
            sortedflag=true;
        } 
        else
        { sortedflag= false;}
        
    }

    cout<<"Is the  given array is sorted(1 for yes 0 for no):   "<<sortedflag;

    return 0;
}