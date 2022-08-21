#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 7567 그릇
    // 수학
    string s;
    char c;
    int ans = 10;
    cin >> s;
    if (s.size() == 0) return 0;
    c = s[0];
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] == c) ans += 5;
        else {
            c = s[i];
            ans += 10;
        }
    }
    cout << ans;

    return 0;
}
