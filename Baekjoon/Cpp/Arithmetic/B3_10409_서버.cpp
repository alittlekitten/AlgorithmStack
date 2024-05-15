#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 10409 서버
	// 수학
	int n, t, input;
	cin >> n >> t;
	int sum = 0;
	int ans = 0;

	for (int i = 0; i < n; ++i) {
		cin >> input;
		sum += input;
		if (sum <= t) ++ans;
	}
	cout << ans;

	return 0;
}
