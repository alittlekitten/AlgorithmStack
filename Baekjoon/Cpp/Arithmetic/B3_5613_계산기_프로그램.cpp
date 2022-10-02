#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 5613 계산기 프로그램
    // 수학
    int n;
    string s;
    cin >> n;
    int ans = n;
    while (1) {
        cin >> s;

        if (s == "=") break;
        else cin >> n;

        if (s == "+") ans += n;
        else if (s == "-") ans -= n;
        else if (s == "*") ans *= n;
        else if (s == "/") ans /= n;
    }
    cout << ans;

    return 0;
}
