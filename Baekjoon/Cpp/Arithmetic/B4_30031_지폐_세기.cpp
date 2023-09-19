#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30031 지폐 세기
	// 수학
	int n, a, b;
	int ans = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a >> b;
		if (a == 136) ans += 1000;
		else if (a == 142) ans += 5000;
		else if (a == 148) ans += 10000;
		else ans += 50000;
	}
	cout << ans;

	return 0;
}
