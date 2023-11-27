#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 11908 카드
    // 구현
    int n;
    int arr[2222] = { 0 };
    int ans = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> arr[i];
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; ++i) ans += arr[i];
    cout << ans;

    return 0;
}
