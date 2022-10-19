#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 25630 팰린드롬 소떡소떡
    // 문자열
    int n;
    string s;
    int ans = 0;
    cin >> n >> s;
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - 1 - i]) ++ans;
    }
    cout << ans;

    return 0;
}
