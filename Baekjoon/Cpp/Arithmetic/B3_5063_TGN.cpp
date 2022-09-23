#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 5063 TGN
    // 수학
    int n, r, e, c;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> r >> e >> c;
        if (r + c < e) cout << "advertise\n";
        else if (r + c == e) cout << "does not matter\n";
        else cout << "do not advertise\n";
    }

    return 0;
}
