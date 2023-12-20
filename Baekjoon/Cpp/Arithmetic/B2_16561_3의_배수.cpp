#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 16561 3의 배수
	// 수학
	int n;
	int ans = 0;
	cin >> n;
	for (int i = 1; i <= n / 3; ++i) {
		for (int j = 1; j <= n / 3; ++j) {
			int sum = i * 3 + j * 3;
			if ((n - sum) % 3 == 0 && sum < n) ++ans;
		}
	}
	cout << ans << '\n';

	return 0;
}
