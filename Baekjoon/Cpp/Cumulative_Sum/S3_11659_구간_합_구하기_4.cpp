#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 11659 구간 합 구하기 4
	// 누적합

	int n, m, input, start, end;
	int sum = 0;
	int arr[100001] = { 0, };
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		cin >> input;
		sum += input;
		arr[i] = sum;
	}
	for (int i = 0; i < m; ++i) {
		cin >> start >> end;
		cout << arr[end] - arr[start-1] << '\n';
	}

	return 0;
}