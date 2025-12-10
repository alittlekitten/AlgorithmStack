#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34750 추석은 언제나 좋아
	// 수학
	int n;
	cin >> n;

	cout << fixed;
	cout.precision(0);
	if (n >= 1000000) cout << n * 0.2 << " " << n * 0.8;
	else if (n >= 500000) cout << n * 0.15 << " " << n * 0.85;
	else if (n >= 100000) cout << n * 0.1 << " " << n * 0.9;
	else cout << n * 0.05 << " " << n * 0.95;

	return 0;
}
