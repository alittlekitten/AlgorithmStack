#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 21212 Cakes
	// 수학
	int n, a, b;
	cin >> n;

	int ans = 10001;
	for (int i = 0; i < n; ++i) {
		cin >> a >> b;
		if (ans > b / a) ans = b / a;
	}

	cout << ans;

	return 0;
}
