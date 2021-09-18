#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int m, n;
    bool chk;
    cin >> m >> n;
    for (int i = m; i <= n; ++i) {
        chk = true;
        for (int j = 2; j <= sqrt(i); ++j) {
            if (i % j == 0) {
                chk = false;
                break;
            }
        }
        if (i == 1) continue; // 1일때 예외처리
        else if (chk == true) cout << i << '\n';
    }

    return 0;
}
