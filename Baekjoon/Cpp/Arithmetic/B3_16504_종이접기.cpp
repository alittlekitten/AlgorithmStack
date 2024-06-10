#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 16504 종이접기
	// 수학
	int n, input;
	long long ans = 0;
	cin >> n;
	for (int i = 0; i < n * n; ++i) {
		cin >> input;
		ans += input;
	}

	cout << ans;

	return 0;
}
