#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30007 라면 공식
	// 수학
	int n, a, b, x;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a >> b >> x;
		cout << a * (x - 1) + b << '\n';
	}

	return 0;
}
