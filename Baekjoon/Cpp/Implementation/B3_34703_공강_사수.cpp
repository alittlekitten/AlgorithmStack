#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34703 공강 사수
	// 구현
	int n, input;
	bool chk[6] = { 0 };
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		chk[input] = true;
	}

	bool chk2 = true;
	for (int i = 1; i <= 5; ++i) {
		if (!chk[i]) {
			chk2 = false;
			break;
		}
	}
	if (chk2) cout << "NO";
	else cout << "YES";

	return 0;
}
