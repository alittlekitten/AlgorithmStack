#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 28018 시간이 겹칠까?
	// 누적합
	int n, s, e, q, t;
	int arr[1000001] = { 0 };

	// 댓글수, 배정시각, 종료시각
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> s >> e;
		++arr[s];
		--arr[e + 1];
	}

	// 누적합
	for (int i = 1; i < 1000001; ++i) arr[i] += arr[i - 1];

	// 특정 시각
	cin >> q;
	for (int i = 0; i < q; ++i) {
		cin >> t;
		cout << arr[t] << '\n';
	}

	return 0;
}
