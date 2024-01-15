#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 4344 평균은 넘겠지
	// 수학
	int c, n;
	int s[1000] = { 0 };
	double ans;

	cin >> c;
	for (int i = 0; i < c; ++i) {
		int avg = 0;
		int cnt = 0;
		cin >> n;

		for (int j = 0; j < n; ++j) {
			cin >> s[j];
			avg += s[j];
		}

		avg = avg / n;

		for (int j = 0; j < n; ++j) {
			if (s[j] > avg) ++cnt;
		}
		ans = (double)cnt / n * 100;

		cout << fixed;
		cout.precision(3);
		cout << ans << "%\n";
	}

	return 0;
}
