#include <bits/stdc++.h>
using namespace std;

int main() {
  //freopen("363A.inp", "r", stdin);
  int n;
  while(cin >> n) {
    do {
      int d = n % 10;
      cout << (d >= 5 ? "-O|" : "O-|");
      d %= 5;
      cout << string(d, 'O') << '-' << string(4 - d, 'O') << '\n';
      n /= 10;
    } while(n > 0);
  }
  return 0;
}