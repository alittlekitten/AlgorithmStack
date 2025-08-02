#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 17285 XORChic
	// 수학
	string s;
	cin >> s;
	int tmp = s[0] ^ 'C';

	for (int i = 0; i < s.size(); ++i) {
		char c = s[i] ^ tmp;
		cout << c;
	}

	return 0;
}
