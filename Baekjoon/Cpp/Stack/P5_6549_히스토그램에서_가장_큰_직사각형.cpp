#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 6549 히스토그램에서 가장 큰 직사각형
	// 스택
	while (true) {
		int n, h, w;
		int arr[100001] = { 0 };
		cin >> n;

		// 0이면 종료
		if (n == 0) break;

		for (int i = 0; i < n; ++i) cin >> arr[i];

		stack<int> s;
		long long ans = 0;
		for (int i = 0; i <= n; i++) {
			while (!s.empty() && arr[i] < arr[s.top()]) {
				h = s.top();
				s.pop();

				if (s.empty()) w = i;
				else w = i - s.top() - 1;

				ans = max(ans, (long long)arr[h] * w);
			}
			s.push(i);
		}

		cout << ans << '\n';
	}

	return 0;
}
