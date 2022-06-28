#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 5893 17배
    // 수학
    string s, s16, ans;
    cin >> s;
    s16 = s + "0000";
    s = "0000" + s;
    
    bool ret = false;
    for (int i = s.size() - 1; i >= 0; --i) {
        if (s16[i] - '0' + s[i] - '0' + ret >= 2) {
            ans += s16[i] - '0' + s[i] - '0' + ret - 2 + '0';
            ret = true;
        }
        else {
            ans += s16[i] - '0' + s[i] - '0' + ret + '0';
            ret = false;
        }
    }
    if (ret) ans += '1';
    reverse(ans.begin(), ans.end());
    
    cout << ans;

    return 0;
}
