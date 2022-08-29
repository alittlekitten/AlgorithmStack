#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 11170 0의 개수
    // 브루트포스
    int t, n, m;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int ans = 0;
        cin >> n >> m;
        for (int j = n; j <= m; ++j) {
            string s = to_string(j);
            for (int k = 0; k < s.size(); ++k) {
                if (s[k] == '0') ++ans;
            }
        }
        cout << ans << '\n';
    }

	return 0;
}
