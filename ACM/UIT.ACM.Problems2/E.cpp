#include <iostream>
#include<cstdio>
#include <string>

using namespace std;
const int MOD = 1e9 + 7;

long long mpow(long long x, long long y) {
	if (y == 0)
		return 1;
	long long cval = mpow(x, y / 2);
	return ((y % 2 == 0) ? (cval * cval) % MOD : ((cval * cval) % MOD * x) % MOD);
}

long long inv(long long x, long long y) {
	return mpow(x, y - 2);
}

int main() {

	int st;
	cin >> st;
	while (st--) {
		string str;
		cin >> str;
		int N, K;
		cin >> K;
		N = str.length();
		long long s = 0;
		int cpow = 1;
		for (int i = 0; i < N; i++) {
			if ((str[i] - '0') % 5 == 0) {
				s += cpow;
			}
			cpow = (2 * cpow) % MOD;
		}
		s %= MOD;
		s = (s * (mpow(2, K * (long long) N) - 1)) % MOD;
		s = (s * (inv(cpow - 1, MOD))) % MOD;
		cout << s << endl;
	}
	return 0;
}
