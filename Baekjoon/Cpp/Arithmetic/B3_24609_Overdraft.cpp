#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 24609 Overdraft
	// 수학
	int n, t;
	int minValue = 0;
	int tmp = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> t;
		tmp += t;
		if (minValue > tmp) minValue = tmp;
	}

	cout << -minValue;

	return 0;
}
