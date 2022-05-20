#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 15873 공백 없는 A+B
    // 수학
    string a;
    cin >> a;
    if (a.size() == 2) cout << a[0] - '0' + a[1] - '0';
    else if (a.size() == 3) {
        if (a[0] == '1' && a[1] == '0') cout << 10 + a[2] - '0';
        else cout << a[0] - '0' + 10;
    }
    else cout << 20;

    return 0;
}
