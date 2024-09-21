#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31518 Triple Sevens
	// 구현
	int n, input;
	bool ans = true;
	
	cin >> n;
	for (int i = 0; i < 3; ++i) {
		bool chk = false;
		for (int j = 0; j < n; ++j) {
			cin >> input;
			if (input == 7) chk = true;
		}
		if (!chk) ans = false;
	}

	if (ans) cout << 777;
	else cout << 0;

	return 0;
}
