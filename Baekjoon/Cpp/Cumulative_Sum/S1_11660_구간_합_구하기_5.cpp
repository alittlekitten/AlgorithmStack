#include <iostream>
using namespace std;

int arr[1025][1025];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 11660 구간 합 구하기 5
    // 누적합, 브루트포스, DP

    int n, m, input;

    // 입력값 받기
    cin >> n >> m;
    
    // 누적합 넣기
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j){
            cin >> input;
            arr[i][j] = arr[i][j-1] + input;
        }
    }

    // 합 계산
    int x1, x2, y1, y2;
    for (int i = 0; i < m; ++i) {
        cin >> x1 >> y1 >> x2 >> y2;
        
        int sum = 0;
        for (int j = x1; j <= x2; ++j) {
            sum += arr[j][y2] - arr[j][y1 - 1];
        }

        cout << sum << '\n';
    }

    return 0;
}
