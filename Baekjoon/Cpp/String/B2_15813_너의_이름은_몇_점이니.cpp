#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15813 너의 이름은 몇 점이니?
	// 문자열
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    for (int i = 0; i < n; ++i) ans += s[i] - 'A' + 1;
    cout << ans;

	return 0;
}
