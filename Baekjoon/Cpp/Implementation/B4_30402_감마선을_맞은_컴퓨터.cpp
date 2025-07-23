#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30402 감마선을 맞은 컴퓨터
	// 구현
	char c;

	for (int i = 0; i < 15; ++i) {
		for (int j = 0; j < 15; ++j) {
			cin >> c;

			if (c == 'w') {
				cout << "chunbae";
				return 0;
			}
			else if (c == 'b') {
				cout << "nabi";
				return 0;
			}
			else if (c == 'g') {
				cout << "yeongcheol";
				return 0;
			}
		}
	}

	return 0;
}
