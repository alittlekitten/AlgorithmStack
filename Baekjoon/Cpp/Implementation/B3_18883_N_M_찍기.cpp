#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 18883 N M 찍기
	// 구현
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		for (int j = 1; j <= m; ++j) {
			cout << i * m + j;
			if (j != m) cout << ' ';
		}
		cout << '\n';
	}

	return 0;
}
