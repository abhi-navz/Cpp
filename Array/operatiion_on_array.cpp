#include <iostream>
using namespace std;

int main()
{
     int array[] = {3, 4, 5, 63, 4, 5, 7, 9};
    // // cout<<"length of the give array:"<<endl;
    // // cout<<(sizeof(array)/sizeof(array[0]));

   //foreach loop:: it'll print all the elements of the array. 'int' specified in foreach loop in datatype of array elements.
    for(int ele: array)
    {
       // cout<<ele<<endl;
    }

    int i = 0;
    int size = (sizeof(array) / sizeof(array[0]));
    while (i < size)
    {
       // cout << array[i] << endl;
        i++;
    }

    char vowels[5];
    cout<<"Enter the vowels:"<<endl;
    for( char &ele: vowels)          // the ampercent operator is necessary here otherwise the 'ele'will store every entered value at different locations. but using it will make the 'ele' store the inputs as elements of vowels array.
    {
        cin>>ele;
    }
    cout<<"The vowels are:"<<endl;
    for( char ele: vowels)
    {
        cout<<ele<<" ";
    }

    return 0;
}