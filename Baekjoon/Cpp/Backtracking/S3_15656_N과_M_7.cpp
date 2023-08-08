#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int arr[7];
int target[7];

void backtrack(int cnt) {
	if (cnt == m) {
		vector<int> v;
		for (int i = 0; i < m; ++i) cout << target[i] << " ";
		cout << '\n';
	}
	else {
		for (int i = 0; i < n; ++i) {
			target[cnt] = arr[i];
			backtrack(cnt + 1);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15656 N과 M (7)
	// 백트래킹
	cin >> n >> m;
	for (int i = 0; i < n; ++i) cin >> arr[i];
	sort(arr, arr + n);
	backtrack(0);

	return 0;
}
