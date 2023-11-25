#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 1392 노래 악보
    // 구현
    int n, q, input;
    cin >> n >> q;
    int arr[101] = { 0 };

    for (int i = 1; i <= n; ++i) cin >> arr[i];

    for (int i = 1; i <= n; ++i) arr[i] += arr[i - 1];

    for (int i = 0; i < q; ++i) {
        cin >> input;
        cout << distance(arr, upper_bound(arr, arr + n, input)) << endl;
    }

    return 0;
}
