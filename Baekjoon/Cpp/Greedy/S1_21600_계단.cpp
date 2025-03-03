#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 21600 계단
	// 그리디
	int n, a;
	cin >> n;

	int ans = 0;
	int tmp = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		if (a > tmp) {
			++tmp;
			if (ans < tmp) ans = tmp;
		}
		else tmp = a;
	}

	cout << ans;

	return 0;
}
