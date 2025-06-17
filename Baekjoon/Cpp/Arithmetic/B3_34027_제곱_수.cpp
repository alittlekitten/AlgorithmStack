#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34027 제곱 수?
	// 수학
	long long t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		if ((long long)sqrt(n) * (long long)sqrt(n) == n) cout << 1;
		else cout << 0;
		cout << '\n';
	}

	return 0;
}
