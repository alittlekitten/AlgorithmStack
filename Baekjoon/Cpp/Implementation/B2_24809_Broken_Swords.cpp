#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 24809 Broken Swords
	// 구현
	int n;
	string s;
	cin >> n;

	int a = 0;
	int b = 0;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		a += (s[0] == '0') + (s[1] == '0');
		b += (s[2] == '0') + (s[3] == '0');
	}

	int c = min(a, b) / 2;
	cout << c << " " << a - c * 2 << " " << b - c * 2;

	return 0;
}
