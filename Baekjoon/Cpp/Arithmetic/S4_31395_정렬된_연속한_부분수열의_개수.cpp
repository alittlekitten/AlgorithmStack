#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31395 정렬된 연속한 부분수열의 개수
	// 수학
	int n, a;
	int tmp = -1;
	long long len = 0;
	long long ans = 0;
	cin >> n;
	while (n--) {
		cin >> a;
		if (a > tmp) ++len;
		else {
			ans += (len + 1) * len / 2;
			len = 1;
		}
		tmp = a;
	}
	ans += (len + 1) * len / 2;
	cout << ans;

	return 0;
}
