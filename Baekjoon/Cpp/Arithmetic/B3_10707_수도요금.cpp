#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 10707 수도요금
    // 수학
    int a, b, c, d, p, x, y;
    cin >> a >> b >> c >> d >> p;
    x = a * p;
    if (c < p) y = b + ((p - c) * d);
    else y = b;
    cout << min(x, y);

    return 0;
}
