#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 24040 예쁜 케이크
	// 수학
	long long t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		if (n % 9 == 0 || n % 3 == 2) cout << "TAK" << '\n';
		else cout << "NIE" << '\n';
	}

	return 0;
}
