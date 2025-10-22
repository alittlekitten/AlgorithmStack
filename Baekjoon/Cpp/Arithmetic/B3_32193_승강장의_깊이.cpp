#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32193 승강장의 깊이
	// 수학
	int n, a, b;
	cin >> n;

	int ground = 0;
	int platform = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a >> b;
		ground += a;
		platform += b;
		cout << ground - platform << '\n';
	}

	return 0;
}
