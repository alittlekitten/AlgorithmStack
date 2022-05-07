#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string arr[10001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

	// 5052 전화번호 목록
    // 정렬

    int tc, n;
    cin >> tc;
    for (int t = 0; t < tc; ++t) {
        bool ans = false;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n - 1; ++i) {
            bool chk = true;
            for (int j = 0; j < arr[i].size(); ++j) {
                if (arr[i][j] != arr[i + 1][j]) {
                    chk = false;
                    break;
                }
            }
            if (chk) {
                ans = true;
                break;
            }
        }
        if (ans) cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }

    return 0;
}
