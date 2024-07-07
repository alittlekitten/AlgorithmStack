#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31994 강당 대관
	// 구현
	int n;
	string s, ans;
	int maxn = -1;
	for (int i = 0; i < 7; ++i) {
		cin >> s >> n;
		if (n > maxn) {
			maxn = n;
			ans = s;
		}
	}

	cout << ans;

	return 0;
}
