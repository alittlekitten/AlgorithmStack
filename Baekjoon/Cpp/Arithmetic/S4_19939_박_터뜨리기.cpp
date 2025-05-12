#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 19939 박 터뜨리기
	// 수학
	int n, k;
	int tmp = 0;
	cin >> n >> k;
	for (int i = 1; i <= k; ++i) tmp += i;
	n -= tmp;

	if (n < 0) cout << -1;
	else {
		if (n % k) cout << k;
		else cout << k - 1;
	}

	return 0;
}
