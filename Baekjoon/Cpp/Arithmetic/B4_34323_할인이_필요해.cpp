#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34323 할인이 필요해
	// 수학
	long long n, m, s;
	cin >> n >> m >> s;

	cout << min((m + 1) * s * (100 - n) / 100, m * s);

	return 0;
}
