#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 14656 조교는 새디스트야!!
    // 수학
    int n, input;
    int ans = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> input;
        if (input != i)
            ++ans;
    }
    cout << ans << '\n';

    return 0;
}
