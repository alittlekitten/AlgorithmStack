#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 5532 방학 숙제
    // 수학
    int l, a, b, c, d;
    cin >> l >> a >> b >> c >> d;
    while (a > 0 || b > 0) {
        a -= c;
        b -= d;
        --l;
    }
    cout << l;

    return 0;
}
