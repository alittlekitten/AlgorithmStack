#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30394 회전하지 않는 캘리퍼스
	// 구현
	int n, i, x, y;
	int maxy = -1000000001;
	int miny = 1000000001;

	cin >> n;
	for (i = 0; i < n; ++i) {
		cin >> x >> y;
		maxy = max(maxy, y);
		miny = min(miny, y);
	}

	cout << maxy - miny;

	return 0;
}
