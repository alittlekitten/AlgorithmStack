#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 24553 팰린드롬 게임
	// 애드혹
	long long t, n;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> n;
		if (n % 10 == 0) cout << 1 << '\n';
		else cout << 0 << '\n';
	}

	return 0;
}
