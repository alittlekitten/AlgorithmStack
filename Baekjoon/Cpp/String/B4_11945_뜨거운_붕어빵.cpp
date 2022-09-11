#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 11945 뜨거운 붕어빵
    // 문자열
    string s;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        for (int j = m - 1; j >= 0; --j) {
            cout << s[j];
        }
        cout << '\n';
    }

	return 0;
}
