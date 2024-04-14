#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(NULL);

	// 1071 소트
	// 그리디
	int n, input;
	cin >> n;
	vector<int> v;

	for (int i = 0; i < n; ++i) {
		cin >> input;
		v.push_back(input);
	}

	// 사전순이 가장 빨라야 하니 먼저 정렬
	sort(v.begin(), v.end());

	for (int i = 0; i < n - 1; ++i) {
		// 연속한 수일때 체크
		if (v[i] + 1 == v[i + 1]) {
			int end = i + 1;
			while (end != n && v[end] == v[i + 1]) ++end;

			if (end >= n) {
				int start = i - 1;
				while (start >= 0 && v[start] == v[i]) --start;
				++v[start + 1];
				--v[i + 1];
			}
			else {
				int tmp = v[end];
				v[end] = v[i + 1];
				v[i + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < n; ++i) cout << v[i] << " ";

	return 0;
}
