#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 29895 Jõululaul
	// 수학
	long long n;
	cin >> n;

	for (long long i = 1; i <= n; ++i) {
		cout << i * (n - i + 1) << '\n';
	}

	return 0;
}
