#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11121 Communication Channels
	// 구현
	int t;
	string a, b;

	cin >> t;
	while (t--) {
		cin >> a >> b;
		bool chk = true;
		for (int i = 0; i < a.size(); ++i) {
			if (a[i] != b[i]) {
				cout << "ERROR" << '\n';
				chk = false;
				break;
			}
		}
		if (chk) cout << "OK" << '\n';
	}

	return 0;
}
