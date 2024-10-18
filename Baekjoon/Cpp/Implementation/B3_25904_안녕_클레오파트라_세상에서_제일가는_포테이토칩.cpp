#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25904 안녕 클레오파트라 세상에서 제일가는 포테이토칩
	// 구현
	int n, x;
	int arr[101] = { 0 };
	cin >> n >> x;
	for (int i = 0; i < n; ++i) cin >> arr[i];

	int idx = 0;
	while (x <= arr[idx]) {
		x++;
		idx++;
		if (idx == n) idx = 0;
	}

	cout << idx + 1;

	return 0;
}
