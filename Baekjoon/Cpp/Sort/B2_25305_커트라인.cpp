#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25305 커트라인
	// 구현, 정렬
	int n, k;
	int arr[1001];
	cin >> n >> k;
	for (int i = 0; i < n; ++i) cin >> arr[i];
	sort(arr, arr + n);
	cout << arr[n - k];

	return 0;
}
