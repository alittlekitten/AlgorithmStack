#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 10480 Oddities
	// 구현
	int n, input;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		if (input % 2) cout << input << " is odd" << '\n';
		else cout << input << " is even" << '\n';
	}

	return 0;
}
