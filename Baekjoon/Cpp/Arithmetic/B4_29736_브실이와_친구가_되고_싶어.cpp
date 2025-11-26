#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 29736 브실이와 친구가 되고 싶어
	// 수학
	int a, b, k, x;
	cin >> a >> b >> k >> x;

	int left = max(a, k - x);
	int right = min(b, k + x);

	if (left > right) cout << "IMPOSSIBLE";
	else cout << (right - left + 1);

	return 0;
}
