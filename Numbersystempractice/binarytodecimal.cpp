#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter your Binary numbrer:"<<endl;
    cin>>n;
   int answer=0;
   int power=1;
   while (n>0)
   {
    int lastdigit=n%10;
    answer+=lastdigit*power;
    power*=2;
    n/=10;
   }
   

   //Alternate way:
//    int i=0;
//    while(n>0){
//         int lastdigit= n%10;
        
//         answer= answer+ lastdigit*(pow(2, i));
//         n=n/10;
//         i++;
//    }
   cout<<"The number in decimal form is:"<<answer<<endl;
    return 0;
}