#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30875 Recovering the Region
	// 애드 혹
	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) cout << i << ' ';
		cout << '\n';
	}

	return 0;
}
