#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14579 덧셈과 곱셈
	// 수학
	int a, b;
	cin >> a >> b;

	int ans = 1;
	for (int i = a; i <= b; ++i) ans = ans * (i * (i + 1) / 2 % 14579) % 14579;

	cout << ans;

	return 0;
}
