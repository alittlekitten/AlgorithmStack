#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 24603 Scaling Recipe
	// 수학
	int n, x, y, a;
	cin >> n >> x >> y;

	for (int i = 0; i < n; ++i) {
		cin >> a;
		cout << a * y / x << '\n';
	}

	return 0;
}
