#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33674 하늘에서 떨어지는 N개의 별
	// 구현
	int n, d, k;
	int arr[101] = { 0 };
	cin >> n >> d >> k;

	for (int i = 0; i < n; ++i) cin >> arr[i];
	int tmp = k / arr[0];

	for (int i = 1; i < n; ++i) tmp = min(tmp, k / arr[i]);
	cout << (d + tmp - 1) / tmp - 1;

	return 0;
}
