#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 8638 Zwycięzcy
	// 구현
	int n;
	cin >> n;

	vector<int> arr(n);
	for (int i = 0; i < n; ++i) cin >> arr[i];

	// 최댓값 찾기
	int maxValue = *max_element(arr.begin(), arr.end());

	// 결과 출력
	for (int i = 0; i < n; ++i) {
		if (arr[i] == maxValue) cout << char('A' + i);
	}

	cout << '\n';

	return 0;
}
