#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 11721 열 개씩 끊어 출력하기
    // 문자열
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size(); ++i) {
        cout << s[i];
        ++cnt;
        if (cnt == 10) {
            cout << '\n';
            cnt = 0;
        }
    }

    return 0;
}