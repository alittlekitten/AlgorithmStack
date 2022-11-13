#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 2592 최빈값
    // 수학
    int n;
    int sum = 0;
    int arr[1001] = { 0 };
    for (int i = 0; i < 10; ++i) {
        cin >> n;
        ++arr[n];
        sum += n;
    }

    int maxValue = -1;
    int maxIdx = 0;
    for (int i = 0; i < 1001; ++i) {
        if (maxValue < arr[i]) {
            maxValue = arr[i];
            maxIdx = i;
        }
    }

    cout << sum / 10 << '\n';
    cout << maxIdx;

    return 0;
}
