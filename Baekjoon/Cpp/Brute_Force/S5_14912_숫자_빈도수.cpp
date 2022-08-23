#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 14912 숫자 빈도수
    // 수학, 브루트포스
    int n, d;
    int ans = 0;
    cin >> n >> d;
    for (int i = 1; i <= n; ++i) {
        int num = i;
        while (num) {
            if (num % 10 == d) ++ans;
            num /= 10;
        }
    }
    cout << ans;

	return 0;
}
