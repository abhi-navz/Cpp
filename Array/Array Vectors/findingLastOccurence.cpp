// In this problem we are finding the last occurence of an element x in a given array:
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
    cout<<"Enter x:"<<endl;
    int x;
    cin>>x;

    int occurence=-1;
    for( int i=0; i<v.size(); i++){
        if( v[i]==x){
            occurence=i;
        }
    }
for( int i=v.size()-1; i>=0; i--){
        if( v[i]==x){
            occurence=i;
            break;
        }
    }

    cout<<"last occurence of " <<x<<" is "<<occurence<<endl;
    cout<<"last occurence of "<<x<<" by 2nd method is "<<occurence;

    return 0;
}