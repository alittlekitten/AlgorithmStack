#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 2902 KMP는 왜 KMP일까?
    // 문자열
    string s, ans;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] >= 65 && s[i] <= 90) ans += s[i];
    }

    cout << ans;

    return 0;
}
