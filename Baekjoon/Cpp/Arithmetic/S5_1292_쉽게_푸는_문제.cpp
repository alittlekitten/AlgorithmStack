#include <iostream>
using namespace std;

int arr[1000];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 1292 쉽게 푸는 문제
    // 수학
    int start, end;
    cin >> start >> end;
    int idx = 0;
    int chk = 0;
    int num = 1;
    while (idx < 1000) {
        arr[idx] = num;
        ++chk;
        ++idx;
        if (num == chk) {
            ++num;
            chk = 0;
        }
    }
    int sum = 0;
    for (int i = start-1; i <= end-1; ++i) {
        sum += arr[i];
    }
    cout << sum;

    return 0;
}
