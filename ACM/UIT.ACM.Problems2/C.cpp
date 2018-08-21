#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cassert>
#include <iostream>
using namespace std;

typedef long long LL;

int p[2005];

int gp(int x) {
    if (p[x] != x) {
        p[x] = gp(p[x]);
    }
    return p[x];
}

void un(int a, int b) {
    a = gp(a);
    b = gp(b);
    if (a != b) {
        p[a] = b;
    }
}

const int MD = (int) 1e9 + 7;

int main() {
    int st;
    cin>>st;
    while(st--)
    {
        int n, m, k;
    	scanf("%d %d %d", &n, &m, &k);
    	for (int i = 1; i <= n; ++i) {
            p[i] = i;
    	}
    	for (int i = 1; i + k - 1 <= n; ++i) {
            for (int j = 0; j < k; ++j) {
                un(i + j, i + k - 1 - j);
            }
    	}
        int res = 1;
    	for (int i = 1; i <= n; ++i) {
            if (p[i] == i) {
                res = (res * (LL) m) % MD;
            }
        }
        printf("%d\n", res);
    }
}