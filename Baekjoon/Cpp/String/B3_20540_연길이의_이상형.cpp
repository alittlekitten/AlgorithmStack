#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 20540 연길이의 이상형
    // 문자열
    string s;
    string ans = "";
    cin >> s;
    for (int i = 0; i < 4; i++) {
        if (s[i] == 'E') ans += 'I';
        else if (s[i] == 'I') ans += 'E';
        else if (s[i] == 'S') ans += 'N';
        else if (s[i] == 'N') ans += 'S';
        else if (s[i] == 'T') ans += 'F';
        else if (s[i] == 'F') ans += 'T';
        else if (s[i] == 'P') ans += 'J';
        else ans += 'P';
    }
    cout << ans;

    return 0;
}
