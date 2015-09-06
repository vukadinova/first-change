#include<iostream>
using namespace std;
int main () {
  long long A = 1, B = 2, C = 3, m[3], s[3], i[3];
  cin >> m[A] >> s[A] >> i[A] >> m[B] >> s[B] >> i[B] >> m[C] >> s[C] >> i[C];
  s[A] = s[A] + 30 * (5 - i[A]);
  while (s[A] >= 60) {
    m[A] = m[A] + 1;
    s[A] = s[A] - 60;
  }
  s[B] = s[B] + 30 * (5 - i[B]);
  while (s[B] >= 60) {
    m[B] = m[B] + 1;
    s[B] = s[B] - 60;
  }
  s[C] = s[C] + 30 * (5 - i[C]);
  while (s[C] >= 60) {
    m[C] = m[C] + 1;
    s[C] = s[C] - 60;
  }
  if (m[A] < m[B] && m[A] < m[C]) {
    cout << m[A] << " " << s[A] << " A\n";
  }
  if (m[B] < m[A] && m[B] < m[C]) {
    cout << m[B] << " " << s[B] << " B\n";
  }
  if (m[C] < m[A] && m[C] < m[B]) {
    cout << m[C] << " " << s[C] << " C\n";
  }
  if (m[A] == m[B] && m[A] != m[C] && m[B] != m[C]) {
    if (s[A] < s[B]) {
      cout << m[A] << " " << s[A] << " A\n";
    } else {
      cout << m[B] << " " << s[B] << " B\n";
    }
  }
  if (m[A] == m[C] && m[A] != m[B] && m[B] != m[C]) {
    if (s[A] < s[C]) {
      cout << m[A] << " " << s[A] << " A\n";
    } else {
      cout << m[C] << " " << s[C] << " C\n";
    }
  }
  if (m[B] == m[C] && m[A] != m[C] && m[A] != m[B]) {
    if (s[B] < s[C]) {
      cout << m[B] << " " << s[B] << " B\n";
    } else {
      cout << m[C] << " " << s[C] << " C\n";
    }
  }
  if (m[A] == m[B] && m[A] == m[C] && m[B] == m[C]) {
    if (s[A] < s[B] && s[A] < s[C]) {
      cout << m[A] << " " << s[A] << " A\n";
    }
    if (s[B] < s[C] && s[B] < s[C]) {
      cout << m[B] << " " << s[B] << " A\n";
    }
    if (s[C] < s[A] && s[C] < s[B]) {
      cout << m[C] << " " << s[C] << " A\n";
    }
  }
  return 0;
}
