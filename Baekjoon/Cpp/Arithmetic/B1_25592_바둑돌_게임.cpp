#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25592 바둑돌 게임
	// 수학
	int n;
	cin >> n;

	int cnt = 1;
	while (n >= cnt) {
		n -= cnt;
		++cnt;
	}

	if (cnt % 2 != 0) cout << cnt - n;
	else cout << 0;

	return 0;
}
