#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 4458 첫 글자를 대문자로
    // 문자열
    int n;
    string s;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; ++i) {
        getline(cin, s);
        if (s[0] >= 'a' && s[0] < 'z') s[0] -= 32;
        cout << s << '\n';
    }

    return 0;
}
