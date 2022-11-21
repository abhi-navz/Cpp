// Question: find the second largest element in the array.a
#include <iostream>
using namespace std;

// int IndexLargestElement( int array[], int size)
// {
//     int Indexlargestelement;
//     int max = INT16_MIN;
//     for( int i=0; i<size; i++){
//         if(array[i]>max){
//             max=array[i];
//             Indexlargestelement=i;
//         }
//     }

//     return Indexlargestelement;
// }
   
      // ALTERNATE APPROACH 


int SecondLargestElement( int array[], int size){
    int max = INT16_MIN;
    int secondmax = INT16_MIN;
    for( int i =0; i<size; i++){
        if( array[i]>max){
            max=array[i];
        }
    }
    for(int i=0; i<size; i++){
        if( array[i]>secondmax && array[i]!=max){
            secondmax = array[i];
        }
    }

    return secondmax;

}


int main()
{
  
    int array[]={2,3,5,6,7,1,7,7};
    int n= 7;
//     int maxIndex = IndexLargestElement(array, n);
    
//     cout<<"The  largest element in the given array is "<<array[maxIndex]<<endl;

//    int largestElement = array[maxIndex];
//    for( int i=0; i<n; i++){                   // In case there is pair of largest element.
//     if( array[i]==largestElement){
//         array[i]= -1;
//     }
//    }
//     int SecondmaxIndex = IndexLargestElement(array,n);
//     cout<<"The second largest element in the given array is "<<array[SecondmaxIndex]<<endl;

cout<<"The second largest element in the given array is "<<SecondLargestElement(array, n);

 
    return 0;
}