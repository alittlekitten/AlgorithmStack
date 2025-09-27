#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34416 Follow The Prize
	// 구현
	int n, ans, m, a, b;
	cin >> n >> ans >> m;

	bool arr[1000001] = { 0 };
	arr[ans] = true;
	for (int i = 0; i < m; ++i) {
		cin >> a >> b;
		swap(arr[a], arr[b]);
	}

	for (int i = 1; i <= n; ++i) {
		if (arr[i]) {
			cout << i;
			break;
		}
	}

	return 0;
}
