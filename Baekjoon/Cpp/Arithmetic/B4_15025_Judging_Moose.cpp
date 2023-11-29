#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 15025 Judging Moose
    // 수학
    int l, r;
    cin >> l >> r;
    if (l != r) cout << "Odd " << max(l, r) * 2;
    else if (l == 0 && r == 0) cout << "Not a moose";
    else cout << "Even " << l * 2;

    return 0;
}
