#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(6);
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < 6; i++)
    {
        cin >> v[i];
    }
    cout << "Enter x:" << endl;
    int x;
    cin >> x;

    int num = 0;
    // for( int i=0; i<<v.size(); i++){
    //     if( v[i]==x){
    //         num++;
    //     }
    // }
    for (int ele : v)
    {
        if (ele == x)
        {
            num++;
        }
    }

    cout << "The Number of occurence of " << x << " is " << num << endl;

    return 0;
}