#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 35261 피갤컵 들어왔으면 이 글부터 봐라
	// 브루트포스
	int n;
	string s;
	string target = "eagle";

	cin >> n >> s;

	int ans = 5;
	for (int i = 0; i < n - 4; ++i) {
		int tmp = 0;
		for (int j = 0; j < 5; ++j) {
			if (s[i + j] != target[j]) ++tmp;
		}
		if (tmp < ans) ans = tmp;
	}

	cout << ans;

	return 0;
}
