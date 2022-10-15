#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 15059 Hard choice
    // 수학
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int ans = 0;
    if (d - a > 0) ans += d - a;
    if (e - b > 0) ans += e - b;
    if (f - c > 0) ans += f - c;
    cout << ans;

    return 0;
}
