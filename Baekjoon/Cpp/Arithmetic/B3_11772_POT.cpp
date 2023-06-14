#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11772 POT
	// 수학
	int n, p;
	long long ans = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> p;
		ans += pow(p / 10, p % 10);
	}
	cout << ans;

	return 0;
}
