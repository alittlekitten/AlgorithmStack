#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26069 붙임성 좋은 총총이
	// 해시
	int n;
	string a, b;
	map<string, bool> m;
	cin >> n;

	int ans = 1;
	for (int i = 0 ; i < n; ++i) {
		cin >> a >> b;
		// 전염시키는 경우
		if (((m[a] || a == "ChongChong") && !m[b]) || (m[b] || b == "ChongChong") && !m[a]) {
			m[a] = true;
			m[b] = true;
			++ans;
		}
	}
	cout << ans;

	return 0;
}
