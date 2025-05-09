#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1141 접두사
	// 그리디
	int n;
	string arr[50];
	cin >> n;

	for (int i = 0; i < n; ++i) cin >> arr[i];

	sort(arr, arr + n);
	int ans = n;
	for (int i = 0; i < n; ++i) {
		string s = arr[i + 1].substr(0, arr[i].size());
		if (s == arr[i]) --ans;
	}
	cout << ans;

	return 0;
}
