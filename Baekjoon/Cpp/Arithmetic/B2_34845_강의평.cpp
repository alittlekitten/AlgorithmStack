#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34845 강의평
	// 수학
	int n, x, input;
	cin >> n >> x;

	int sum = 0;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		sum += input;
	}

	if (x * n - sum <= 0) {
		cout << 0;
	}
	else {
		cout << (x * n - sum + 100 - x - 1) / (100 - x);
	}

	return 0;
}
