#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 1932 정수 삼각형
    // DP

    int arr[501][501] = { 0 };
    int n, input;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            cin >> arr[i][j];
        }
    }

    for (int i = n - 1; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            arr[i - 1][j] += max(arr[i][j], arr[i][j + 1]);
        }
    }

    cout << arr[0][0];

    return 0;
}
