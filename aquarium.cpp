#include <iostream>
using namespace std;

int main ()
{
    long long v, n;
    cin >> v >> n;
    if(n*3 <= v)
        cout << "NO\n";
    else
        cout << "YES " << (n*3 - v)/3 + ((n*3 - v)%3 != 0) << endl;
    return 0;
}
