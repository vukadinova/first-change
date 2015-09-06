#include<iostream>
using namespace std;
int main () {
  long long B, C, D, A, K;
  cin >> B >> C >> D >> K;
  if (K == 1) {
    A = max (max (((B / 10) / 10), (((C / 10) / 10))), ((D / 10) / 10));
    if (9 + (A - 5) > 8) {
      cout << A << "\n";
    }
    else {
      cout << "NO\n";
    }
  }
  if (K == 2) {
    A = max (max ((B / 10) % 10, (C / 10) % 10), (D / 10) % 10);
    if (9 + (A - 5) > 8) {
      cout << A << "\n";
    }
    else {
      cout << "NO\n";
    }
  }
  if (K == 3) {
    A = max (max (B % 10, C % 10), D % 10);
    if (9 + (A - 5) > 8) {
      cout << A << "\n";
    }
    else {
      cout << "NO\n";
    }
  }
  return 0;
}
