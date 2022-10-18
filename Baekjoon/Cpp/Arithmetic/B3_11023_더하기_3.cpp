#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 11023 더하기 3
    // 수학
    int n;
    int ans = 0;
    while (cin >> n) {
        ans += n;
    }
    cout << ans;

    return 0;
}
