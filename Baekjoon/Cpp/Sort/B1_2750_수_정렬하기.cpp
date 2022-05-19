#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 2750 수 정렬하기
    // 정렬
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << '\n';
    }

    return 0;
}
