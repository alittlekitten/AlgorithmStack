#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2526 사이클
	// 구현
	int n, p;
	int arr[98] = { 0 };
	cin >> n >> p;

	int tmp = n;
	while (1) {
		tmp = (tmp * n) % p;
		if (arr[tmp] == 2) break;
		++arr[tmp];
	}

	int ans = 0;
	for (int i = 0; i < p; ++i) {
		if (arr[i] == 2) ++ans;
	}
	cout << ans;

	return 0;
}
