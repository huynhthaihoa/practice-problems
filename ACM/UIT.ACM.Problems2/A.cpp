#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
#define INF 1000000007
int main()
{
	int st;
	cin>>st;
	while (st--)
	{
	    int n,k,S=-INF;
	    scanf("%d%d",&n,&k);
	    for(int i=0;i<n;i++)
	    {
		 int f,t;
		 scanf("%d%d",&f,&t);
		 int c=0;
		 if(t>k)c=f-(t-k);else c=f;
		 if(c>S)S=c;
	    }
	    printf("%d\n",S);
	}
	return 0;
}
