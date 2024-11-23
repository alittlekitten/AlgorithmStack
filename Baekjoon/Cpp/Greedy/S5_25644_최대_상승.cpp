#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25644 최대 상승
	// 그리디
	int n, a;
	cin >> n;
	int tmp = 1000000001;
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		tmp = min(tmp, a);
		ans = max(ans, a - tmp);
	}

	cout << ans;

	return 0;
}
