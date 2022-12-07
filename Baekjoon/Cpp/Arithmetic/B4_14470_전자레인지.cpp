#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 14470 전자레인지
    // 수학
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    if (a < 0) cout << -1 * a * c + d + b * e;
    else if (a > 0) cout << (b - a) * e;
    else cout << d + b * e;

    return 0;
}
