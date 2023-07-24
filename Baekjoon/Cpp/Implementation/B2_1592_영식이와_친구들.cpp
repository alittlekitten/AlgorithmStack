#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1592 영식이와 친구들
	// 구현
	int n, m, l;
	int ans = 0;
	int target = 0;
	int arr[1001] = { 0 };
	cin >> n >> m >> l;
	arr[0] = 1;
	while (arr[target] != m) {
		if (arr[target] % 2) target = (target + l) % n;
		else target = (n + target - l) % n;
		++arr[target];
		++ans;
	}
	cout << ans;

	return 0;
}
