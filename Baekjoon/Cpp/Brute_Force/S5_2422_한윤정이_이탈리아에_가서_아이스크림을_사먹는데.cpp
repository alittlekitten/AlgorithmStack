#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 2422 한윤정이 이탈리아에 가서 아이스크림을 사먹는데
    // 브루트포스
    int n, m, input1, input2;
    int ans = 0;
    bool arr[201][201] = { 0 };
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> input1 >> input2;
        arr[input1][input2] = true;
        arr[input2][input1] = true;
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            if (arr[i][j] == false) {
                for (int k = j + 1; k <= n; k++) {
                    if (arr[i][k] == false && arr[j][k] == false) {
                        ans++;
                    }
                }
            }
        }
    }

    cout << ans;

    return 0;
}
