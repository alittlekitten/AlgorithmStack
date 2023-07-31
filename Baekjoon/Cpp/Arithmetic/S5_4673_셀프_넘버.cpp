#include <iostream>
using namespace std;

int func(int n) {
	int sum = n;

	while (n) {
		sum = sum + n % 10;
		n /= 10;
	}

	return sum;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 4673 셀프 넘버
	// 수학
	bool chk[10001] = { 0 };
	for (int i = 1; i <= 10000; ++i) {
		int n = func(i);
		if (n < 10001) chk[n] = true;
	}
	for (int i = 1; i <= 10000; ++i) {
		if (!chk[i]) cout << i << '\n';
	}

	return 0;
}
