#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 6131 완전제곱수
	// 수학
	int n;
	int ans = 0;
	cin >> n;
	for (int i = 1; i <= 500; ++i) {
		for (int j = 1; j <= 500; ++j) {
			if (j * j == i * i + n) ++ans;
		}
	}
	cout << ans;

	return 0;
}
