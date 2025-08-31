#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30791 gahui and sousenkyo 1
	// 구현
	int a, b, c, d, e;
	int ans = 0;

	cin >> a >> b >> c >> d >> e;
	if (a - 1000 <= b) ++ans;
	if (a - 1000 <= c) ++ans;
	if (a - 1000 <= d) ++ans;
	if (a - 1000 <= e) ++ans;
	cout << ans;

	return 0;
}
