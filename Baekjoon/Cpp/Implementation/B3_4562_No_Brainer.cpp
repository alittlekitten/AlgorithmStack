#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 4562 No Brainer
    // 구현
    int n, x, y;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        if (x < y) cout << "NO BRAINS\n";
        else cout << "MMM BRAINS\n";
    }

    return 0;
}
