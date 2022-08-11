#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 11365 !급일 밀비
    // 문자열
    string s;
    while (1) {
        getline(cin, s);
        if (s == "END") break;
        reverse(s.begin(), s.end());
        cout << s << endl;
    }

    return 0;
}
