#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 2576 홀수
    // 수학
    int n;
    int min = 101;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        cin >> n;
        if (n % 2 == 1) {
            if (min > n) min = n;
            sum += n;
        }
    }

    if (min == 101) cout << -1;
    else cout << sum << '\n' << min;

    return 0;
}
