#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26767 Hurra!
	// 수학
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		if (i % 7 && !(i % 11)) cout << "Super!\n";
		else if (!(i % 7) && i % 11) cout << "Hurra!\n";
		else if (!(i % 77)) cout << "Wiwat!\n";
		else cout << i << '\n';
	}

	return 0;
}
