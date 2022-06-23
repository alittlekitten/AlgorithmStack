#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 2445 별 찍기 - 8
    // 구현
    int n;
    cin >> n;
    for (int i = 1; i < n + 1; ++i) {
        for (int j = 0; j < i; ++j) cout << '*';
        for (int j = 0; j < (n - (i - 1) - 1) * 2; ++j) cout << ' ';
        for (int j = 0; j < i; ++j) cout << '*';
        cout << '\n';
    }
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < n - i; ++j) cout << '*';
        for (int j = 0; j < i * 2; ++j) cout << ' ';
        for (int j = 0; j < n - i; ++j) cout << '*';
        cout << '\n';
    }

    return 0;
}
