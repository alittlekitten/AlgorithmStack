#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

long long ft[1000001];
long long arr[1000001];

// 펜윅트리에서 영향을 끼치는 부분 update
void update(long long n, long long idx, long long value) {
    while (idx <= n) {
        ft[idx] += value;
        idx += (idx & -idx);
    }
}

// 해당하는 위치까지의 합을 구함
// 업데이트랑 반대로 0까지 내려가면서 다 더해주면 됨
long long sum(long long idx) {
    long long result = 0;
    while (idx > 0) {
        result += ft[idx];
        idx -= (idx & -idx);
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 2042 구간 합 구하기
    // 누적합, 펜윅트리

    long long n, m, k ,input;
    cin >> n >> m >> k;

    // 입력값을 받아서 arr에 넣고 update
    for (int i = 1; i <= n; ++i) {
        cin >> input;
        arr[i] = input;
        update(n, i, arr[i]);
    }

    long long a, b, c;

    for (int i = 0; i < m + k; ++i) {
        cin >> a >> b >> c;
        if (a == 1) { // b를 c로 변경
            long long diff = c - arr[b]; // 차이를 구함
            arr[b] = c; // 배열 교체
            update(n, b, diff); // 차이를 이용해서 ft 업데이트
        }
        else { // b부터 c까지 합 구하기
            cout << sum(c) - sum(b - 1) << '\n';
        }
    }

    return 0;
}
