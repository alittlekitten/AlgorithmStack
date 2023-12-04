#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 23794 골뱅이 찍기 - 정사각형
	// 구현
	int n;
	cin >> n;
	for (int i = 0; i < n + 2; ++i) cout << '@';
	cout << '\n';
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n + 2; ++j) {
			if (j == 0 || j == n + 1) cout << '@';
			else cout << ' ';
		}
		cout << '\n';
	}
	for (int i = 0; i < n + 2; ++i) cout << '@';

	return 0;
}
