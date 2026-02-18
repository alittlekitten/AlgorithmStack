#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13222 Matches
	// 수학
	int n, w, h, l;
	cin >> n >> w >> h;

	for (int i = 0; i < n; ++i) {
		cin >> l;

		if (l * l <= w * w + h * h) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}
