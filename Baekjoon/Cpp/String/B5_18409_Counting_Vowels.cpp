#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 18409 Counting Vowels
    // 문자열
    int n;
    int cnt = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') ++cnt;
    }

    cout << cnt;

    return 0;
}
