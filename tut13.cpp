// ********* Array and pointer arithmetic ******
// An array is a collection of items which are of the similar type stored in contiguous memory locations.

#include <iostream>
using namespace std;

int main()
{
  int marks[] = {34, 55, 64, 34, 64}; // direct declaration of an array:

  // // taking array input from user;
  // int m[5];
  // for (int i = 0; i < 5; i++)
  // {
  //   cout<<"enter "<<i<<" array elements"<<endl;
  //   cin>>m[i];
  //   cout<<endl;
  // }
  // cout<<"the array elments are"<<endl;
  // for (int i = 0; i < 5; i++)
  // {
  //   cout<<"the value at m "<<i<<" is "<<m[i]<<endl;
  // }

  //   Pointers and Arrays
  // Storing the address of an array into pointer is different than storing the address of a variable into the pointer because the name of the array is an address of the first index of an array. So to use ampersand "&" with the array name for assigning the address to a pointer is wrong.

  // &Marks --> Wrong
  // Marks --> address of the first block

  cout << "the adress of first block of array is " << marks << endl;
  ;
  int *p = marks;
  cout << "the value at first block of array or marks[0] is " << *p << endl;

  //  value of marks[0] is givne by *p, similiarly value of marks[1] is given by *(p+1),
  // and similiarly value of marks[n] will be given by *(p+n).

  cout << "the value at 0 index is " << *p << endl;
  cout << "the value at 1 index is " << *(p + 1) << endl;
  cout << "the value at 2 index is " << *(p + 2) << endl;
  cout << "the value at 3 index is " << *(p + 3) << endl;
  cout << "the value at 4 index is " << *(p + 4) << endl;

  return 0;
}
