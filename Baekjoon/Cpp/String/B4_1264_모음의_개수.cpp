#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 1264 모음의 개수
    // 문자열
    string s;
    while (1) {
        getline(cin, s);
        if (s == "#") break;
        int cnt = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U') ++cnt;
        }
        cout << cnt << '\n';
    }
    


    return 0;
}
