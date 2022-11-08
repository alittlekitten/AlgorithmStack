#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 10824 네 수
    // 수학
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    string s1 = to_string(a) + to_string(b);
    string s2 = to_string(c) + to_string(d);
    cout << stoll(s1) + stoll(s2);

    return 0;
}
