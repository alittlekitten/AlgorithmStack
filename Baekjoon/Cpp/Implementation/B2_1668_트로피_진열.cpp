#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1668 트로피 진열
	// 구현
	int n, i;
	int arr[50] = { 0 };
	int ans = 0;
	int tmp = 0;
	
	cin >> n;

	// 입력
	for (i = 0; i < n; ++i) cin >> arr[i];

	// 왼쪽
	for (i = 0; i < n; ++i){
		if (tmp < arr[i]) {
			tmp = arr[i];
			++ans;
		}
	}
	cout << ans << '\n';

	// 오른쪽
	ans = 0;
	tmp = 0;
	for (i = n - 1; i >= 0; --i) {
		if (tmp < arr[i]) {
			tmp = arr[i];
			++ans;
		}
	}
	cout << ans;

	return 0;
}
