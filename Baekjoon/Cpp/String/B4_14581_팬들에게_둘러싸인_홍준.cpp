#include <iostream>
#include <string>
using namespace std;

int alpa[26];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 14581 팬들에게 둘러싸인 홍준
    // 문자열
    string s;
    cin >> s;
    cout << ":fan::fan::fan:\n";
    cout << ":fan::" << s << "::fan:\n";
    cout << ":fan::fan::fan:\n";

    return 0;
}
