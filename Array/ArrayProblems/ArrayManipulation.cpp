//Question: Find the unique number in a array in which all the elements are repeated twice with  a one unique value.

#include<iostream>
using namespace std;

int main()
{
    int array[]={2,3,1,2,3,4,4,5,1};
    int size = (sizeof(array))/4;

    for( int i=0; i<size; i++){
        for( int j=i+1; j<size; j++){
            if( array[i] == array[j]){
                array[i] = array[j] = -1;
            }
        }
    }
    int unique=0;

    for( int i=0; i<size; i++)
    {
        if( array[i] > 0){
            unique=array[i];
        }
    }
    
    cout<<"The unique no in the given array is "<<unique<<endl;
    
    
    return 0;
}