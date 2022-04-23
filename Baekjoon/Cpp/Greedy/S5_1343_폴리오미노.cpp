#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 1343 폴리오미노
    // 그리디
    
    string str, ans;
    cin >> str;

    int cnt = 0;
    bool chk = true;
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == 'X') ++cnt;
        else {
            if (cnt == 2) {
                ans += "BB";
                cnt = 0;
            }
            if (cnt != 0) {
                chk = false;
                break;
            }
            ans += '.';
            cnt = 0;
        }

        if (cnt == 4) {
            cnt = 0;
            ans += "AAAA";
        }
    }

    if (cnt == 2) ans += "BB";
    else if (cnt == 4) ans += "AAAA";
    
    if (cnt % 2 != 0) chk = false;

    if (!chk) cout << -1;
    else cout << ans;

    return 0;
} 
