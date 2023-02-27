#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2875 대회 or 인턴
	// 수학
	int n, m, k;
	cin >> n >> m >> k;
	cout << min(min(m, n / 2), (n + m - k) / 3);

	return 0;
}
