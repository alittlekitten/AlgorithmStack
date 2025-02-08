#include <iostream>
using namespace std;

int arr[1001];

int bf(int n) {
	for (int i = 1; i <= 50; ++i) {
		for (int j = 1; j <= 50; ++j) {
			for (int k = 1; k <= 50; ++k) {
				if (arr[i] + arr[j] + arr[k] == n) return true;
			}
		}
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 10448 유레카 이론
	// 브루트포스
	int t, k;
	cin >> t;

	// 초기화
	for (int i = 1; i <= 1000; ++i) arr[i] = arr[i - 1] + i;

	// 브루트포스
	for (int i = 0; i < t; ++i) {
		cin >> k;
		cout << bf(k) << '\n';
	}

	return 0;
}
