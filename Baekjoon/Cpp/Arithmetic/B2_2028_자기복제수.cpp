#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 2028 자기복제수
    // 수학
    int t, n;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n;
        int target = n * n;
        bool chk = true;
        if (n < 10 && n != target % 10) chk = false;
        else if (n >= 10 && n < 100 && n != target % 100) chk = false;
        else if (n >= 100 && n < 1000 && n != target % 1000) chk = false;
        else if (n == 1000) chk = false;
         
        if (chk) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

    return 0;
}
