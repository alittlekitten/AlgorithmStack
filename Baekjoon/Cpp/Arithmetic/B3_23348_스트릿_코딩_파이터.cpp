#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(NULL);

	// 23348 스트릿 코딩 파이터
	// 수학
	int a, b, c, n, aa, bb, cc;
	int score[1001] = { 0 };
	int ans = 0;
	cin >> a >> b >> c >> n;

	for (int i = 0; i < n; ++i) {
		score[i] = 0;
		for (int j = 0; j < 3; ++j) {
			cin >> aa >> bb >> cc;
			score[i] += a * aa + b * bb + c * cc;
		}
	}

	for (int i = 0; i < n; ++i) {
		if (score[i] > ans) ans = score[i];
	}

	cout << ans;

	return 0;
}
