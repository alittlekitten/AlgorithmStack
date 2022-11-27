#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	// 9550 아이들은 사탕을 좋아해
	// 수학

	int t, n, k, ans, input;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		ans = 0;
		cin >> n >> k;
		for (int j = 0; j < n; ++j) {
			cin >> input;
			ans += input / k;
		}
		cout << ans << '\n';
	}
	return 0;
}
