#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 20833 Kuber
    // 수학
    int n;
    int ans = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        ans += i * i * i;
    }

    cout << ans;

    return 0;
}