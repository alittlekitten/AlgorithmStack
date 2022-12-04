#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	// 26209 Intercepting Information
	// 구현
	int n;
	bool chk = true;
	for (int i = 0; i < 8; ++i) {
		cin >> n;
		if (n == 9) {
			chk = false;
			break;
		}
	}
	if (chk) cout << "S";
	else cout << "F";

	return 0;
}
