#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 9501 꿍의 우주여행
	// 수학
	int t, n, d, vi, fi, ci;
	cin >> t;
	while (t--) {
		int ans = 0;
		cin >> n >> d;
		for (int i = 0; i < n; ++i) {
			cin >> vi >> fi >> ci;
			if (vi * fi / ci >= d) ++ans;
		}
		cout << ans << '\n';
	}

	return 0;
}
