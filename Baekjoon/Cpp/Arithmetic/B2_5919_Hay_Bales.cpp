#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 5919 Hay Bales
	// 수학
	int n;
	int arr[10001] = { 0 };
	cin >> n;

	int sum = 0;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
		sum += arr[i];
	}

	int avg = sum / n;
	int ans = 0;

	for (int i = 0; i < n; ++i) ans += abs(avg - arr[i]);
	
	cout << ans / 2; // 옮긴게 2번 측정되니까 2로 나눠줌

	return 0;
}
