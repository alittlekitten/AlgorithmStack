#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1977 완전제곱수
	// 수학
	int m, n;
	int sum = 0;
	int minValue = 10001;
	int cnt = 0;
	cin >> m >> n;
	for (int i = 1; i <= 100; ++i) {
		if (i * i >= m && i * i <= n) {
			sum += i * i;
			cnt++;
		}
		if (i * i >= m && i * i <= n && minValue > i * i) minValue = i * i;
	}
	if (cnt == 0) cout << "-1";
	else cout << sum << '\n' << minValue;

	return 0;
}
