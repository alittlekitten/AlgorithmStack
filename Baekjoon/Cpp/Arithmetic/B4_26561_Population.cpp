#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26561 Population
	// 수학
	long long n, p, t;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> p >> t;
		cout << p - t / 7 + t / 4 << '\n';
	}

	return 0;
}
