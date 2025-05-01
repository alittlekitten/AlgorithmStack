#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30457 단체줄넘기
	// 그리디
	int n, x;
	int arr[1010] = { 0 };
	int ans = 0;

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		++arr[x];
	}
	for (int i = 1; i <= 1000; ++i) ans += min(arr[i], 2);
	
	cout << ans;

	return 0;
}
