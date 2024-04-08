#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(NULL);

	// 5607 問題1
	// 수학
	int n, a, b;
	cin >> n;
	int aa = 0;
	int bb = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a >> b;
		if (a > b) aa += a + b;
		else if (a == b) {
			aa += a;
			bb += b;
		}
		else bb += a + b;
	}
	cout << aa << ' ' << bb;

	return 0;
}
