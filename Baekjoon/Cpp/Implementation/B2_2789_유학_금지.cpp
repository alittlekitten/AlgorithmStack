#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 2789 유학 금지
    // 구현
    string s, ans;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'C' || s[i] == 'A' || s[i] == 'M' || s[i] == 'B' || s[i] == 'R' || s[i] == 'I' || s[i] == 'D' || s[i] == 'G' || s[i] == 'E') continue;
        else ans += s[i];
    }
    cout << ans;

	return 0;
}
