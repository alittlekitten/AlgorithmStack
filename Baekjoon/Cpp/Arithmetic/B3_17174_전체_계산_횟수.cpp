#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 17174 전체 계산 횟수
	// 수학
	int n, m;
	cin >> n >> m;
	int ans = n;
	while (n) {
		n = n / m;
		ans += n;
	}
	cout << ans;

	return 0;
}
