#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	cout.tie(NULL);

	// 13240 Chessboard
	// 구현
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if ((i + j) % 2 == 0) cout << "*";
			else cout << ".";
		}
		cout << '\n';
	}

	return 0;
}
