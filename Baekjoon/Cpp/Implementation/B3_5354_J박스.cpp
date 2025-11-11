#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 5354 J박스
	// 구현
	int t, input;
	cin >> t;
	while (t--) {
		cin >> input;
		for (int i = 0; i < input; ++i) {
			for (int j = 0; j < input; ++j) {
				if (i != 0 && i != input - 1 && j != 0 && j != input - 1) cout << "J";
				else cout << "#";
			}
			cout << '\n';
		}
		cout << '\n';
	}

	return 0;
}
