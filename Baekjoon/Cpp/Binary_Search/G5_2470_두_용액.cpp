#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 2470 두 용액
    // 이분탐색
    int n;
    int arr[100001] = { 0 };
    int sum = 2000000001;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    int s = 0;
    int e = n - 1;
    int ts = -1;
    int te = -1;

    while (s < e) {
        if (abs(arr[s] + arr[e]) < sum) {
            sum = abs(arr[s] + arr[e]);
            ts = s;
            te = e;
        }
        if (arr[s] + arr[e] < 0) s++;
        else e--;
    }
    cout << arr[ts] << " " << arr[te];

    return 0;
}
