#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33572 자세히 보아야 예쁘다
	// 구현
	long long n, m, a;
	cin >> n >> m;

	long long sum = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		sum += a;
	}

	if (sum - n < m) cout << "OUT";
	else cout << "DIMI";

	return 0;
}
