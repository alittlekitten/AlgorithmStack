#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2435 기상청 인턴 신현수
	// 구현
	int n, k, tmp; 
	int ans = -101;
	cin >> n >> k;
	int arr[101] = { 0 };

	for (int i = 1; i <= n; ++i) {
		cin >> tmp;
		arr[i] = tmp + arr[i - 1];
	}
	
	for (int i = k; i <= n; ++i) {
		tmp = arr[i] - arr[i - k];
		if (ans < tmp) ans = tmp;
	}

	cout << ans;

	return 0;
}
