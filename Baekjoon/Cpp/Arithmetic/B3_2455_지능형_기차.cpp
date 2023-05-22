#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2455 지능형 기차
	// 수학
	int a, b;
	int total = 0;
	int ans = 0;
	for (int i = 0; i < 4; ++i) {
		cin >> a >> b;
		total += b - a;
		ans = max(ans, total);
	}
	cout << ans;

	return 0;
}
