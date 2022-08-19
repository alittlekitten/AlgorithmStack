#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 10833 사과
    // 수학
    int s, a, n;
    int ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s >> a;
        ans += a % s;
    }
    cout << ans;

    return 0;
}
