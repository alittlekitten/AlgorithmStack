#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 15667 2018 연세대학교 프로그래밍 경진대회
    // 수학
    int n;
    cin >> n;
    for (int i = 1; i <= 10101; ++i) {
        if (i * (i + 1) == n - 1) {
            cout << i;
            break;
        }
    }

    return 0;
}
