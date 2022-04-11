#include <iostream>
using namespace std;

int n;
long long b;
long long arr[5][5];
long long ans[5][5];
long long tmp[5][5];

void matrixMul(long long aa[5][5], long long bb[5][5]) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            tmp[i][j] = 0;
            for (int k = 0; k < n; ++k) {
                tmp[i][j] += (aa[i][k] * bb[k][j]);
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            aa[i][j] = tmp[i][j] % 1000;
        }
    }
        
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 10830 행렬 제곱
    // 수학, 분할정복
    
    cin >> n >> b;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }

    // 단위행렬 생성
    for (int i = 0; i < n; ++i) {
        ans[i][i] = 1;
    }

    while (b > 0) {
        if (b % 2 == 1) {
            matrixMul(ans, arr);
        }
        matrixMul(arr, arr);
        b /= 2;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << ans[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}
