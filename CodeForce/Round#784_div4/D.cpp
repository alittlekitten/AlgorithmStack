#include <iostream>
#include <string>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);
 
    int tc, n;
    string ans;
    cin >> tc;
    for (int t = 0; t < tc; ++t) {
        cin >> n >> ans;
        string tmp = "";
        bool chk1 = true;
        for (int i = 0; i < n; ++i) {
            if (ans[i] != 'W') tmp += ans[i];
            else {
                char ch;
                if (tmp.size() == 1) {
                    chk1 = false;
                    break;
                }
                else if (tmp.size() > 1) {
                    bool chk2 = false;
                    ch = tmp[0];
                    for (int j = 1; j < tmp.size(); ++j) {
                        if (ch != tmp[j]) {
                            chk2 = true;
                            break;
                        }
                    }
                    if (!chk2) chk1 = false;
                }
                if (!chk1) break;
                else tmp = "";
            }
        }
        if (tmp.size() == 1) chk1 = false;
        else if (tmp.size() > 1) {
            bool chk2 = false;
            char ch = tmp[0];
            for (int j = 1; j < tmp.size(); ++j) {
                if (ch != tmp[j]) {
                    chk2 = true;
                    break;
                }
            }
            if (!chk2) chk1 = false;
        }
 
        if (chk1) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
 
    return 0;
}
