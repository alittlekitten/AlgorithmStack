#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 4922 Walk Like an Egyptian
	// 구현
	int n;
	while (cin >> n) {
		if (!n) break;

		cout << n << " => " << n * n - n + 1 << '\n';
	}

	return 0;
}
