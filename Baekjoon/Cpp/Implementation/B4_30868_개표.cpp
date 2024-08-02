#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30868 개표
	// 구현
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n / 5; ++i) cout << "++++ ";
		for (int i = 0; i < n % 5; ++i) cout << "|";
		cout << '\n';
	}

	return 0;
}
