#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 18228 펭귄추락대책위원회
	// 구현
	int n, x;
	int mn[2] = { 0 };
	mn[0] = 1000000001;
	mn[1] = 1000000001;
	cin >> n;

	int idx = 0;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		if (x == -1) ++idx;
		else mn[idx] = min(mn[idx], x);
	}
	cout << mn[0] + mn[1];

	return 0;
}
