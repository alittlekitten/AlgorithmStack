#include <iostream>
using namespace std;

int ans[100][100];
int a[100][100];
int b[100][100];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 2740 행렬 곱셈
    // 수학

    int n, m, input;
    int ansn, ansm;
    cin >> n >> m;
    ansn = n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    cin >> n >> m;
    ansm = m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < ansn; ++i) {
        for (int j = 0; j < ansm; ++j) {
            for (int k = 0; k < n; ++k) {
                ans[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < ansn; ++i) {
        for (int j = 0; j < ansm; ++j) {
            cout << ans[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}
