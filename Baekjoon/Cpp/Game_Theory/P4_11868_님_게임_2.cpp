#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(NULL);

	// 11868 님 게임 2
	// 수학, 게임이론
	int n, p;
	int ans = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> p;
		ans ^= p;
	}

	if (ans == 0) cout << "cubelover";
	else cout << "koosaga";

	return 0;
}
