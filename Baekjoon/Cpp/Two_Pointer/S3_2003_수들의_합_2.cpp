#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 2003 수들의 합 2
    // 투 포인터
    int n, m;
    cin >> n >> m;
    int s = 0;
    int e = 0;
    int arr[10001] = { 0 };
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int sum = arr[0];
    int cnt = 0;
    while (s < 10001) {
        if (sum < m) {
            e++;
            sum += arr[e];
        }
        else if (sum > m) {
            sum -= arr[s];
            s++;
        }
        else {
            cnt++;
            e++;
            sum += arr[e] - arr[s];
            s++;
        }
    }

    cout << cnt;

    return 0;
}
