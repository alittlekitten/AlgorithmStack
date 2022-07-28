#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 10569 다면체
    // 기하학
    int t, v, e;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> v >> e;
        cout << 2 - v + e << '\n';
    }

    return 0;
}
