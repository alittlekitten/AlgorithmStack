#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30032 알파벳 뒤집기
	// 구현
	int n, d;
	string s;
	cin >> n >> d;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		if (d == 1) {
			for (int j = 0; j < n; ++j) {
				if (s[j] == 'd') cout << "q";
				else if (s[j] == 'b') cout << "p";
				else if (s[j] == 'q') cout << "d";
				else if (s[j] == 'p') cout << "b";
			}
		}
		else if (d == 2) {
			for (int j = 0; j < n; ++j) {
				if (s[j] == 'd') cout << "b";
				else if (s[j] == 'b') cout << "d";
				else if (s[j] == 'q') cout << "p";
				else if (s[j] == 'p') cout << "q";
			}
		}
		cout << '\n';
	}

	return 0;
}
