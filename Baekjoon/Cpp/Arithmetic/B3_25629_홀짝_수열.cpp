#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25629 홀짝 수열
	// 수학
	int n, a;
	cin >> n;

	int odd = 0;
	int even = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		if (a % 2) ++odd;
		else ++even;
	}

	if (odd == even || odd == even + 1) cout << 1;
	else cout << 0;

	return 0;
}
