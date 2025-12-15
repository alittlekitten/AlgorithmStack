#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34563 궁핍한 모그
	// 기하학
	int t, n, m;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> n >> m;
		cout << n + m - 1 << '\n';
	}

	return 0;
}
