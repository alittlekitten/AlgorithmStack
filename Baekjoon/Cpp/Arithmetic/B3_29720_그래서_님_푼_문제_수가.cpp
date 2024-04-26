#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(NULL);

	// 29720 그래서 님 푼 문제 수가?
	// 수학
	int n, m, k;
	cin >> n >> m >> k;
	cout << max(0, n - m * k) << " " << max(0, n - m * (k - 1) - 1);

	return 0;
}
