#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 27310 chino_shock
    // 문자열
    string s;
    int ans = 0;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == ':') ++ans;
        else if (s[i] == '_') ans += 5;
        ++ans;
    }
    
    cout << ans;

    return 0;
}
