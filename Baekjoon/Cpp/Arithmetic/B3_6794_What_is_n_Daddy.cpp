#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 6794 What is n, Daddy?
	// 수학
	int n;
	bool check[6] = { 0 };
	cin >> n;

	for (int i = 0; i <= 5; ++i) {
		for (int j = 0; j <= 5; ++j) {
			if (i + j == n) check[i] = true;
		}
	}

	int ans = 0;
	for (int i = 0; i <= n / 2; ++i) {
		if (check[i]) ++ans;
	}

	cout << ans;

	return 0;
}
