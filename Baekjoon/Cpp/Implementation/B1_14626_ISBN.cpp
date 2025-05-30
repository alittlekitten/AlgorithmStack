#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14626 ISBN
	// 구현
	string s;
	int sum = 0;
	cin >> s;
	int idx = s.find('*');
	for (int i = 0; i < 10; ++i) {
		sum = 0;
		s[idx] = i + '0';

		for (int j = 0; j < 13; ++j) {
			if (j % 2 == 1) sum += (s[j] - '0') * 3;
			else sum += (s[j] - '0');
		}

		if (sum % 10 == 0) {
			cout << s[idx];
			break;
		}
	}

	return 0;
}
