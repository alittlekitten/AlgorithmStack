#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 25704 출석 이벤트
    // 수학
    int n, p;
    cin >> n >> p;
    if (n < 5) cout << p;
    else if (n < 10) cout << max(p - 500, 0);
    else if (n < 15) cout << max(min(p - 500, p / 100 * 90), 0);
    else if (n < 20) cout << max(min(p - 2000, p / 100 * 90), 0);
    else cout << max(min(p - 2000, p / 100 * 75), 0);

    return 0;
}
