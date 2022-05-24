#include <iostream>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 2010 플러그
    // 수학
    int n, input;
    cin >> n;
    int ans = -n + 1;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        ans += input;
    }
    cout << ans;

    return 0;
}
