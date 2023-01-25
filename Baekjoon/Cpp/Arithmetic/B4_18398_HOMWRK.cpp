#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 18398 HOMWRK
    // 수학
    int t, n, a, b;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n;
        for (int j = 0; j < n; ++j) {
            cin >> a >> b;
            cout << a + b << " " << a * b << '\n';
        }
    }

    return 0;
}
