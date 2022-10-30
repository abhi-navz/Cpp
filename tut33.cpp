// Dynamic initialization of objects using constructors:
#include <iostream>
using namespace std;
class bank_deposit
{
    int principal, years;
    float interestrate, returnvalue;

public:
    bank_deposit(){}
    // default constructor:  
    bank_deposit(int p, int y, float r);

    bank_deposit(int p, int y, int r);

    void show(void);
};

bank_deposit ::bank_deposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestrate = r;
    returnvalue = p;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}
bank_deposit ::bank_deposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestrate = float(r) / 100;
    returnvalue = p;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}
void bank_deposit ::show(void)
{
    cout << endl
         << "The principal amount was " << principal
         << ". The return value after "
         << years << " years"
         << " at interest rate "
         << interestrate << " is " << returnvalue << " Rupees " << endl;
}

int main()
{

    int p, y, R;
    float r;
    cout << "Enter the principal amount, tenure(in yrs), and the interest rate(in float):" << endl;
    cin >> p >> y >> r;
    bank_deposit b1 = bank_deposit(p, y, r);
    b1.show();
    cout << "Enter the principal amount, tenure(in yrs), and the interest rate(in percentage):" << endl;
    cin >> p >> y >> R;
    bank_deposit b2 = bank_deposit(p, y, R);
    b2.show();

    return 0;
}