#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 2442 별 찍기 5
    // 구현

    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << ' ';
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << '*';
        }
        cout << '\n';
    }

    return 0;
}
