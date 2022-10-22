#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 15351 인생 점수
    // 문자열
    int n;
    int ans = 0;
    string s;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; ++i) {
        ans = 0;
        getline(cin, s);
        for (int j = 0; j < s.size(); ++j) {
            if (s[j] != ' ') ans += s[j] - 64;
        }
        if (ans == 100) cout << "PERFECT LIFE\n";
        else cout << ans << '\n';
    }

    return 0;
}
