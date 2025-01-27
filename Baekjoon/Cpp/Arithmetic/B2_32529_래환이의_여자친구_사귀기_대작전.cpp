#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32529 래환이의 여자친구 사귀기 대작전
	// 수학
	int n, m;
	int arr[100001] = { 0 };
	cin >> n >> m;

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	for (int i = n - 1; i >= 0; --i) {
		m -= arr[i];
		if (m <= 0) {
			cout << i + 1;
			break;
		}
	}

	if (m > 0) cout << -1;

	return 0;
}
