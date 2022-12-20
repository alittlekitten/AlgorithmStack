#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26574 Copier
	// 구현
	int n, input;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		cout << input << " " << input << '\n';
	}

	return 0;
}
