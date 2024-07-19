#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30979 유치원생 파댕이 돌보기
	// 수학
	int t, n, f;
	int ans = 0;
	cin >> t >> n;

	for (int i = 0; i < n; ++i) {
		cin >> f;
		ans += f;
	}

	if (t <= ans) cout << "Padaeng_i Happy";
	else cout << "Padaeng_i Cry";

	return 0;
}
