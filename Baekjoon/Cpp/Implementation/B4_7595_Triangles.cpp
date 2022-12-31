#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 7595 Triangles
	// 구현
	int n;
	while (1) {
		cin >> n;
		if (n == 0) break;
		for (int i = 1; i <= n; ++i) {
			for (int j = 0; j < i; ++j) {
				cout << "*";
			}
			cout << '\n';
		}
	}

	return 0;
}    
