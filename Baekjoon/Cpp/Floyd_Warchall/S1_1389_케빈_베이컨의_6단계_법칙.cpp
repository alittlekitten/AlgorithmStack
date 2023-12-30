#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1389 케빈 베이컨의 6단계 법칙
    // 플로이드와샬
    int n, m, a, b;
    int arr[101][101] = { 0 };
    cin >> n >> m;

    // 초기화
    for (int i = 0; i < m; ++i) {
        cin >> a >> b;
        arr[a][b] = 1;
        arr[b][a] = 1;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i != j && arr[i][j] != 1) {
                arr[i][j] = 500001;
            }
        }
    }

    // 플로이드와샬
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            for (int k = 1; k <= n; ++k) {
                if (arr[j][i] + arr[i][k] < arr[j][k]) arr[j][k] = arr[j][i] + arr[i][k];
            }
        }
    }

    // 돌면서 케빈베이컨 젤 작은거 찾기
    int minValue = 500001;
    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        int tmp = 0;
        for (int j = 1; j <= n; ++j) tmp += arr[i][j];
        if (tmp < minValue) {
            minValue = tmp;
            ans = i;
        }
    }

    cout << ans;

	return 0;
}
