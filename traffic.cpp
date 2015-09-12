#include<iostream>
using namespace std;

int main (){
    int x, y, z;
    cin >> x >> y >> z;
    if(x < 8)
        x += 24;

    int seconds = ((x - 8)*3600) + (y*60) + z;
    seconds %= 108;
    if(seconds < 60)
        cout << "premini\n";
    else if(seconds < 64)
        cout << "izchakai\n";
    else if(seconds < 104)
        cout << "spri\n";
    else
        cout << "izchakai\n";
    return 0;
}
