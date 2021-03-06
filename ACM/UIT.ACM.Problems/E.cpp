#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
  //freopen("355C.inp", "r", stdin);
  int n, l, r, q1, q2;
  while(cin>>n>>l>>r>>q1>>q2) {
    int a[100005]={0};
    for(int i=1; i<=n; i++) cin>>a[i], a[i]+=a[i-1];
    int ans=0x7fffffff;
    for(int i=0; i<=n; i++)
    {
      int tmp=a[i]*l+(a[n]-a[i])*r;
      if(2*i-n>1) tmp+=q1*(2*i-n-1);
      else if(n-i-i>1) tmp+=q2*(n-2*i-1);
      ans=min(ans, tmp);
    }
    cout<<ans<<endl;
  }
}
