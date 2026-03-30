#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15096 Batter Up
	// 수학
	int n, x;
	cin >> n;

	double sum = 0;
	int cnt = 0;
	for (int i = 0; i < n; ++i) {
		cin >> x;

		if (x != -1) {
			sum += x;
			++cnt;
		}
	}

	cout << sum / cnt;

	return 0;
}
