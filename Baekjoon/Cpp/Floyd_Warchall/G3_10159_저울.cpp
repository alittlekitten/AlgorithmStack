#include <iostream>
using namespace std;

int arr[101][101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 10159 저울
    // 플로이드와샬
    int n, m, input1, input2;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> input1 >> input2;
        arr[input1][input2] = 1;
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (arr[i][j] != 1) arr[i][j] = 1001;
        }
    }

    for (int k = 1; k <= n; ++k) {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (arr[i][j] > arr[i][k] + arr[k][j]) arr[i][j] = arr[i][k] + arr[k][j];
            }
        }
    }

    for (int i = 1; i <= n; ++i) {
        int cnt = 0;
        for (int j = 1; j <= n; ++j) {
            if (i != j && arr[i][j] == 1001 && arr[j][i] == 1001) cnt++;
        }
        cout << cnt << '\n';
    }

    return 0;
}
