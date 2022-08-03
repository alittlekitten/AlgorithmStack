#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 10156 과자
    // 수학
    int k, n, m;
    int ans = 0;
    cin >> k >> n >> m;
    if (k * n - m < 0) cout << 0;
    else cout << k * n - m;

    return 0;
}
