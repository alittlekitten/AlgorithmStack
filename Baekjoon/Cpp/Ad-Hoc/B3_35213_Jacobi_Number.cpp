#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 35213 Jacobi Numbers
	// 애드 혹
	int n;
	cin >> n;

	cout << n << '\n';
	for (int i = 0; i < n; ++i) {
		cout << 1 << ' ';
	}

	return 0;
}
