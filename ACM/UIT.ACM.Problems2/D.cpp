#include <iostream>
#include <algorithm>
using namespace std;

typedef unsigned long long ul;

int main() {
	int n;
	int st;
	ul w[2001];
	ul li[2001];
	ul ld[2001];

	cin >> st;

	while (st--) {
		cin >> n;

		for (int i = 0; i < n; i++)
		{
			cin >> w[n - i - 1];
			li[i]=1;
			ld[i]=1;
		}


		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i; j++) {
				if (w[i] > w[j]) {
					li[i] = max(li[i], li[j] + 1);
				}
				else {
					ld[i] = max(ld[i], ld[j] + 1);
				}
			}
		}

		ul kq = 0;
		for (int i = 0; i < n; i++) {
			kq = max(kq, li[i] + ld[i] - 1);
		}

		cout << kq << endl;
	}

	return 0;
}
