#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 9085 더하기
    // 수학
    int t, n, input;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int ans = 0;
        cin >> n;
        for (int j = 0; j < n; ++j) {
            cin >> input;
            ans += input;
        }
        cout << ans << '\n';
    }

    return 0;
}
