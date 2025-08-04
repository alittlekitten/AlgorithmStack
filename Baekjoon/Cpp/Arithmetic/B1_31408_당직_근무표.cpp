#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31408 당직 근무표
	// 수학
	int n, a;
	int arr[100001] = { 0 };
	cin >> n;

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		++arr[a];
		if (ans < arr[a]) ans = arr[a];
	}

	if (ans > (n + 1) / 2) cout << "NO";
	else cout << "YES";

	return 0;
}
