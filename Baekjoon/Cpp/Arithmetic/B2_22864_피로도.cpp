#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 22864 피로도
	// 수학
	int a, b, c, m;
	int work = 0;
	int tired = 0;
	cin >> a >> b >> c >> m;
	for (int i = 1; i <= 24; ++i) {
		if (tired + a <= m) {
			tired += a;
			work += b;
		}
		else {
			tired -= c;
			if (tired < 0) tired = 0;
		}
	}
	cout << work;

	return 0;
}
