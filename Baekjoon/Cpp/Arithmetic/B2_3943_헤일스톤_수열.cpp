#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 3943 헤일스톤 수열
	// 수학
	int n, t;
	cin >> t;
	while (t--) {
		cin >> n;
		int ans = n;
		while (n != 1) {
			int tmp;
			if (n % 2) tmp = n * 3 + 1;
			else tmp = n / 2;
			n = tmp;
			ans = max(ans, tmp);
		}
		cout << ans << '\n';
	}

	return 0;
}
