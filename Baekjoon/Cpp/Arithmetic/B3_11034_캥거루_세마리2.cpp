#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11034 캥거루 세마리2
	// 수학
	int a, b, c;
	while (cin >> a >> b >> c) {
		cout << max(b - a, c - b) - 1 << '\n';
	}

	return 0;
}
