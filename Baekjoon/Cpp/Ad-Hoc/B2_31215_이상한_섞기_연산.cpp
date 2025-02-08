#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31215 이상한 섞기 연산
	// 애드 혹
	int t, n;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> n;
		if (n <= 2) cout << "1" << '\n';
		else cout << "3" << '\n';
	}

	return 0;
}
