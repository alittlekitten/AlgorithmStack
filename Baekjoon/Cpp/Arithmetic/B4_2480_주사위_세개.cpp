#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

	// 2480 주사위 세개
    // 수학

    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c) {
        cout << 10000 + 1000 * a;
    }
    else if (a == b && b != c || a == c && c != b || b == c && c != a) {
        if (a == b) cout << 1000 + 100 * a;
        else if (b == c) cout << 1000 + 100 * b;
        else if (a == c) cout << 1000 + 100 * c;
    }
    else {
        cout << 100 * max(a, max(b, c));
    }
    
    return 0;
}
