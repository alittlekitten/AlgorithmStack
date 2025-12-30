#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32184 디미고에 가고 싶어!
	// 수학
	int a, b;
	cin >> a >> b;

	int ans = 0;
	if (a % 2 == 0) {
		++ans;
		++a;
	}
	if (b % 2) {
		++ans;
		--b;
	}

	ans += (b - a + 1) / 2;
	cout << ans;

	return 0;
}
