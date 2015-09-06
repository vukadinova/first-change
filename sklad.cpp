#include<iostream>
using namespace std;
int main () {
  long long n, k, m;
  cin >> n >> k >> m;
  cout << n - (k + (m - (k / 2))) << "\n";
  return 0;
}
