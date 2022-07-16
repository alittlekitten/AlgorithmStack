#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 2863 이게 분수?
    // 수학
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int max = -1;
    int maxcnt = 0;

    if (a / c + b / d >= max) {
        max = a / c + b / d;
    }
    
    if (c / d + a / b >= max) {
        max = c / d + a / b;
        maxcnt = 1;
    }

    if (d / b + c / a >= max) {
        max = d / b + c / a;
        maxcnt = 2;
    }

    if (b / a + d / c >= max) cout << 3;
    else cout << maxcnt;

    return 0;
}
