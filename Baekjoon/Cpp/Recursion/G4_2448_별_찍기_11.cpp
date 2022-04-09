#include <iostream>
using namespace std;

char arr[4000][8000];

void star(int x, int y, int n) {
    if (n == 3) {
        arr[x][y] = '*';
        arr[x + 1][y - 1] = '*';
        arr[x + 1][y + 1] = '*';
        arr[x + 2][y - 2] = '*';
        arr[x + 2][y - 1] = '*';
        arr[x + 2][y] = '*';
        arr[x + 2][y + 1] = '*';
        arr[x + 2][y + 2] = '*';

        return;
    }
    star(x, y, n / 2);
    star(x + n / 2, y - n / 2, n / 2);
    star(x + n / 2, y + n / 2, n / 2);
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 2448 별 찍기 - 11
    // 재귀

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 2 * n - 1; ++j) {
            arr[i][j] = ' ';
        }
    }

    star(0, n - 1, n);

    // 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * n - 1; ++j) {
            cout << arr[i][j];
        }
        cout << '\n';
    }

    return 0;
}
