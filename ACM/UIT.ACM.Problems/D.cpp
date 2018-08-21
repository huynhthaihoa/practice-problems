#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
  //freopen("385B.inp","r", stdin);
  string s;
  while(cin>>s) {
    int n=s.size(),ans=0, k1=-1;
    for (int k=0;k<n-3;k++)
    if  (s.substr(k,4)=="bear") {
      int a1=(k-k1)*(n-k-3);
      ans+=a1;
      k1=k;
    }
    cout <<ans<< endl;
  }
  return 0;
}