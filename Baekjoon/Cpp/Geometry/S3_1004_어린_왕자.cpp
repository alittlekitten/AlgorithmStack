#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 1004 어린 왕자
    // 기하학

    int t, x1, y1, x2, y2, n, xx, yy, rr;
    int cnt;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cnt = 0;
        cin >> x1 >> y1 >> x2 >> y2 >> n;
        for (int j = 0; j < n; ++j) {
            cin >> xx >> yy >> rr;
            int chk1 = (xx - x1) * (xx - x1) + (yy - y1) * (yy - y1);
            int chk2 = (xx - x2) * (xx - x2) + (yy - y2) * (yy - y2);
            int rsquare = rr * rr;
            if (chk1 < rsquare && chk2 > rsquare || chk1 > rsquare && chk2 < rsquare) cnt++;
        }
        cout << cnt << '\n';
    }

    return 0;
}
