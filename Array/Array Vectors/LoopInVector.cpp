#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    //for loop

        cout<<"Enter Element:"<<endl;
    for(int i=1; i<=5; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    // for(int i=0; i<5; i++){
    //     cout<<"enter element:\n";
    

    //     cin>>v[i];
    // }

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.insert( v.begin()+2 , 6);
   
   //for each loop
   for(int ele: v){
    cout<<ele<<" ";
   }
   cout<<endl;

   v.erase( v.end()-3);

   // while loop
   int i=0;
   while( i<v.size()){
    cout<<v[i]<<" ";
    i++;
   }
    
    return 0;
}