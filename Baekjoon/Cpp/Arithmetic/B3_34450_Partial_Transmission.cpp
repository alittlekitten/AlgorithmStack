#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34450 Partial Transmission
	// 수학
	int n, p, input;
	bool arr[101] = { 0 };
	cin >> n >> p;

	for (int i = 0; i < n - 1; ++i) {
		cin >> input;
		arr[input - p] = true;
	}

	for (int i = 0; i < n; ++i) {
		if (!arr[i]) {
			cout << p + i;
			break;
		}
	}

	return 0;
}
