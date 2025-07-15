#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25400 제자리
	// 그리디
	int n;
	int arr[250001] = { 0 };
	cin >> n;

	for (int i = 0; i < n; ++i) cin >> arr[i];

	int chk = 1;
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		if (arr[i] == chk) ++chk;
		else ++ans;
	}

	cout << ans;

	return 0;
}
