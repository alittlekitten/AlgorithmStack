#include <iostream>
using namespace std;

int road[101][101];
int items[101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 14938 서강그라운드
    // 플로이드와샬

    int n, m, r, a, b, l;
    cin >> n >> m >> r;

    for (int i = 1; i <= n; ++i) {
        cin >> items[i];
    }

    for (int i = 0; i < r; ++i) {
        cin >> a >> b >> l;
        road[a][b] = l;
        road[b][a] = l;
    }

    // 없는 길 처리 및 자기 자신 처리
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i != j && !road[i][j]) road[i][j] = 2000; // 1500만 넘으면 된다!
        }
    }

    for (int k = 1; k <= n; ++k) {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (road[i][j] >= road[i][k] + road[k][j]) road[i][j] = road[i][k] + road[k][j];
            }
        }
    }

    int max = 0;

    for (int i = 1; i <= n; ++i) {
        int sum = 0;
        for (int j = 1; j <= n; ++j) {
            if (road[i][j] <= m) sum += items[j];
        }
        if (max < sum) max = sum;
    }
    cout << max;
    

    return 0;
}
