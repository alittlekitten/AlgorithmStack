#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 19698 헛간 청약
    // 수학
    int n, w, h, l;
    cin >> n >> w >> h >> l;
    int ans = (w / l) * (h / l);
    if (n < ans) cout << n;
    else cout << ans;

    return 0;
}
