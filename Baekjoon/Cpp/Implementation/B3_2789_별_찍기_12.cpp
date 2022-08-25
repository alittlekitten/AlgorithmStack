#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 2522 별 찍기 - 12
    // 구현
    int n, i, k, j;
    cin >> n;
    for (i = 0; i < n; i++) {
        for (k = 0; k < n - i - 1; k++)
            cout << " ";
        for (j = 0; j <= i; j++)
            cout << "*";
        cout << '\n';
    }
    for (i = 0; i < n - 1; i++) {
        for (k = 0; k < i + 1; k++)
            cout << " ";
        for (j = 0; j < n - i - 1; j++)
            cout << "*";
        cout << '\n';
    }

    return 0;
}
