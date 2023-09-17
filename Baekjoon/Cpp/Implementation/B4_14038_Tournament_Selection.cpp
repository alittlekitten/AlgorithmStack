#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14038 Tournament Selection
	// 구현
	char s;
	int cnt = 0;
	for (int i = 0; i < 6; ++i) {
		cin >> s;
		if (s == 'W') ++cnt;
	}
	if (cnt >= 5) cout << "1";
	else if (cnt >= 3) cout << "2";
	else if (cnt >= 1) cout << "3";
	else cout << "-1";

	return 0;
}
