#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 10953 A + B - 6
    // 수학
    int n, a, b;
    char c;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> c >> b;
        cout << a + b << '\n';
    }

    return 0;
}
