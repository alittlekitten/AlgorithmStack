#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2774 아름다운 수
	// 구현
	int n;
	string s;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int arr[10] = { 0 };
		int ans = 0;
		cin >> s;
		for (int j = 0; j < s.size(); ++j) {
			++arr[s[j] - '0'];
		}
		for (int j = 0; j < 10; ++j) {
			if (arr[j]) ++ans;
		}
		cout << ans << '\n';
	}
	
	return 0;
}
