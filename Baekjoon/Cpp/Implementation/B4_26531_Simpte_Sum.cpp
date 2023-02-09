#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 26531 Simple Sum
    // 구현
    int a, b, c;
    string s1, s2;
    cin >> a >> s1 >> b >> s2 >> c;
    if (a + b == c) cout << "YES";
    else cout << "NO";

    return 0;
}
