#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 10988 팰린드롬인지 확인하기
    // 문자열

    string s;
    cin >> s;
    bool chk = true;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != s[s.size() - 1 - i]) {
            chk = false;
            break;
        }
    }
    if (chk) cout << 1;
    else cout << 0;

	return 0;
}
