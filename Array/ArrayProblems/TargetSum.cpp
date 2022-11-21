#include <iostream>
using namespace std;

int main()
{
    
    int array[]={3,4,6,7,1};


    int targetsum=7;
   


    int pair = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {

            if (array[i] + array[j ] == targetsum)
            {
                pair++;
            }
        }
    }

    cout << "the total no of pair of targetsum is " << pair << endl;
    return 0;
}