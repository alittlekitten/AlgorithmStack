#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26550 Ornaments
	// 수학
	long long n, input;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> input;
		cout << input * (input + 1) * (input + 2) / 6 << '\n';
	}

	return 0;
}
