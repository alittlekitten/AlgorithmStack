#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 2506 점수계산
    // 수학
    int n, input;
    int streak = 1;
    int ans = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        if (input) {
            ans += streak;
            ++streak;
        }
        else streak = 1;
    }

    cout << ans;

    return 0;
}
