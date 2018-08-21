#include <cstdio>
#include <iostream>
#include <string>
#include <string.h>
using namespace std;
string L;
int k, l, n, ok, C[10];

int main() {
  //freopen("365A.inp", "r", stdin);
  int test = 0;
  while(cin >> n >> k) {
    l = 0;
    int m = n;
    test ++;
    while (n--) {
      memset(C, 0, sizeof(C));
      cin >> L;
      for (int i = 0; i < L.length(); i++) {
        C[L[i] - '0'] = 1;
      }
      ok = 1;
      for (int i = 0; i <= k; i++) {
        if (!C[i]) {
          ok = 0;
          break;
        }
      }
      if (ok) l++;
    }
    cout << l << endl;
  }
  return 0;
}