#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 1100 하얀 칸
    // 문자열
    string s;
    int ans = 0;
    for (int i = 0; i < 8; ++i) {
        cin >> s;
        for (int j = 0; j < 8; ++j) {
            if (i % 2 == 0 && j % 2 == 0 && s[j] == 'F') ++ans;
            if (i % 2 == 1 && j % 2 == 1 && s[j] == 'F') ++ans;
        }
    }
    cout << ans;

    return 0;
}
