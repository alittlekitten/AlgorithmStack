#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 2444 별 찍기 7
    // 구현

    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = n - i; j > 0; --j) cout << ' ';
        for (int j = 2 * i - 1; j > 0; --j) cout << '*';
        cout << '\n';
    }
    for (int i = n - 1; i > 0; --i) {
        for (int j = n - i; j > 0; --j) cout << ' ';
        for (int j = 2 * i - 1; j > 0; --j) cout << '*';
        cout << '\n';
    }

    return 0;
}
