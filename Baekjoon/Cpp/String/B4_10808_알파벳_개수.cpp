#include <iostream>
#include <string>
using namespace std;

int alpa[26];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 10808 알파벳 개수
    // 문자열

    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        ++alpa[s[i] - 97];
    }

    for (int i = 0; i < 26; ++i) {
        cout << alpa[i] << " ";
    }

    return 0;
}
