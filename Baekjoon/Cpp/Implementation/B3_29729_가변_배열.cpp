#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 29729 가변 배열
	// 구현
	int s, n, m, input;
	cin >> s >> n >> m;

	int cur = 0;
	for (int i = 0; i < n + m; ++i) {
		cin >> input;
		cur += input ? 1 : -1;
		if (cur > s) s <<= 1;
	}
	cout << s;

	return 0;
}
