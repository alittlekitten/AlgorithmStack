#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11815 짝수? 홀수?
	// 수학
	long long n, x;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		if (x == (long long)sqrt(x) * (long long)sqrt(x)) cout << 1 << " ";
		else cout << 0 << " ";
	}

	return 0;
}
