#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 28324 스케이트 연습
	// 그리디
	long long n;
	long long arr[500000] = { 0 };
	cin >> n;

	for (int i = 0; i < n; ++i) cin >> arr[i];

	long long ans = 0;
	long long tmp = 0;
	for (int i = n - 1; i >= 0; --i) {
		tmp = min(tmp + 1, arr[i]); 
		ans += tmp;
	}

	cout << ans;

	return 0;
}
