#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 12778 CTP공국으로 이민 가자
	// 구현
	int t, m;
	char c;
	cin >> t;
	while (t--) {
		cin >> m >> c;
		if (c == 'C') {
			for (int i = 0; i < m; ++i) {
				char input;
				cin >> input;
				cout << (int)(input - 'A' + 1) << " ";
			}
		}
		else {
			for (int i = 0; i < m; ++i) {
				int input;
				cin >> input;
				cout << (char)('A' + input - 1) << " ";
			}
		}
		cout << '\n';
	}

	return 0;
}
