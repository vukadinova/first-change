#include<iostream>
using namespace std;

int main ()
{
    int A, dig[3], numD = 2;
    cin >> A;
    while(A > 0)
    {
        dig[numD] = A%10;
        A = A / 10;
        -- numD;
    }
    if(dig[0]*(dig[1]*10 + dig[2]) > (dig[0]*10 + dig[1])*dig[2])
        cout << dig[0]*(dig[1]*10 + dig[2]) << endl;
    else
        cout << (dig[0]*10 + dig[1])*dig[2] << endl;
    return 0;
}
