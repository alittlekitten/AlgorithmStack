#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 20494 스시
	// 구현
	int n;
	string s;
	cin >> n;

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		ans += s.size();
	}
	cout << ans;

	return 0;
}
