#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1434 책 정리
	// 수학
	int n, m, input;
	int box = 0;
	int book = 0;
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		box += input;
	}
	for (int i = 0; i < m; ++i) {
		cin >> input;
		book += input;
	}

	cout << box - book;

	return 0;
}
