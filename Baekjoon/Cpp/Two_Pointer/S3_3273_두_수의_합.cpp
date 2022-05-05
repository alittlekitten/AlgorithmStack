#include <iostream>
#include <algorithm>
using namespace std;

int arr[100001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

	// 3273 두 수의 합
    // 투포인터

    int n, x;
    int ans = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    int start = 0;
    int end = n - 1;
    
    cin >> x;

    while (start < end) {
        int sum = arr[start] + arr[end];
        if (sum == x) {
            ++start;
            --end;
            ++ans;
        }
        else if (sum > x) --end;
        else ++start;
    }

    cout << ans;

    return 0;
}

