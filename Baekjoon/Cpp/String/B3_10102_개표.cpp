#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 10102 개표
    // 문자열
    int n;
    string s;
    int a = 0;
    int b = 0;
    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'A') ++a;
        else ++b;
    }
    if (a > b) cout << 'A';
    else if (a < b) cout << 'B';
    else cout << "Tie";

	return 0;
}
