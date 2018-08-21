#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int c1,c2,c3,c4,i,j,n[2],a,m[2];
int main() {
  //freopen("355B.inp", "r", stdin);
  while(cin>>c1>>c2>>c3>>c4>>n[0]>>n[1]){
    j = 0;
    memset(m, 0, sizeof m);
    for (;j<2;j++) {
      for (i=0;i<n[j];i++) {
        cin>>a;
        if (a) m[j] += min(a*c1,c2);
      }
    }
    cout << min(m[0]+m[1], min(min(c4,2*c3), min(m[0]+c3,m[1]+c3))) << endl;
  }
}