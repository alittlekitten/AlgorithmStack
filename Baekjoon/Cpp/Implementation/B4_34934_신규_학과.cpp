#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34934 신규 학과
	// 구현
	int n, y;
	string s;
	cin >> n;

	string ans = "";
	for (int i = 0; i < n; ++i) {
		cin >> s >> y;
		if (y == 2026) ans = s;
	}
	
	cout << ans;

	return 0;
}
