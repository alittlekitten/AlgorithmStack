#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 5524 입실 관리
    // 문자열
    string s;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        for (int j = 0; j < s.size(); ++j) {
            if (s[j] < 'a') {
                s[j] += 32;
            }
        }
        cout << s << '\n';
    }

    return 0;
}
