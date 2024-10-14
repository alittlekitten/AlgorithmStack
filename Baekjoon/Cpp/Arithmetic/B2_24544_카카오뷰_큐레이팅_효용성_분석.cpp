#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 24544 카카오뷰 큐레이팅 효용성 분석
	// 수학
	int n, input;
	int arr[1001] = { 0 };
	cin >> n;
	
	for (int i = 0; i < n; ++i) cin >> arr[i];

	int sum = 0;
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		if (!input) ans += arr[i];
		sum += arr[i];
	}

	cout << sum << '\n' << ans;

	return 0;
}
