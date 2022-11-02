#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 23235 The Fastest Sorting Algorithm In The World
    // 구현
    int arr[100001];
    int n;
    int cnt = 1;
    while (1) {
        cin >> n;
        if (n == 0) break;
        for (int i = 0; i < n; ++i) cin >> arr[i];
        cout << "Case " << cnt << ": Sorting... done!\n";
        ++cnt;
    }

    return 0;
}
