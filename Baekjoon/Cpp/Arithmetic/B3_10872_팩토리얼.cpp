#include <iostream>
#include <algorithm>
using namespace std;

int num[1001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

	  // 10872 팩토리얼
    // 수학

    int n;
    int ans = 1;
    cin >> n;
    if (n == 0) cout << 1;
    else {
        for (int i = 1; i <= n; ++i) {
            ans *= i;
        }
        cout << ans;
    }

    return 0;
}
