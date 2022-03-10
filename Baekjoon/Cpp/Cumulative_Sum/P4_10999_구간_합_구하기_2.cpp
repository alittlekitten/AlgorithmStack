#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long ft1[1000001]; // 1차항
long long ft0[1000001]; // 상수항
long long arr[1000001];

// 실제로 두 펜윅트리를 업데이트해주는 함수
// one은 1차항, zero는 상수항을 뜻함
void twoftupdate(long long n, long long idx, long long one, long long zero) {
    while (idx <= n) {
        ft1[idx] += one;
        ft0[idx] += zero;
        idx += (idx & -idx);
    }
}

// 펜윅트리에서 영향을 끼치는 부분 update (idx1부터 idx2까지 업데이트)
// idx1부터 끝까지 value를 더함
// idx2 + 1부터 끝까지 value를 뺌
void update(long long n, long long idx1, long long idx2, long long value) {
    twoftupdate(n, idx1, value, (-idx1 + 1) * value);
    twoftupdate(n, idx2 + 1, -value, idx2 * value);
}

// idx까지의 합 구하기
long long sum(long long idx) {
    long long one = 0;
    long long zero = 0;
    long long tmp = idx; // 기존 idx 저장용
    while (idx > 0) { // 펜윅트리는 1부터 값이 들어가므로
        one += ft1[idx];
        zero += ft0[idx];
        idx -= (idx & -idx);
    };
    return one * tmp + zero; // 1차항 * 인덱스 + 상수항
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 10999 구간 합 구하기 2 - 2942에서 for문을 이용한 범위변경
    // 누적합, 펜윅트리(세그먼트 트리), lazy propagation
    // 원래는 세그먼트 트리로 풀어야하지만.. 야매로 펜윅트리 2개로 계산함 ;;

    long long n, m, k, input;
    cin >> n >> m >> k;

    // 값 넣기
    for (int i = 1; i <= n; ++i) {
        cin >> input;
        arr[i] = input;
        update(n, i, i, arr[i]);
    }

    // 업데이트 여부 받기
    long long a, b, c, d;
    for (int i = 0; i < m + k; ++i) {
        cin >> a;
        if (a == 1) { //업데이트
            cin >> b >> c >> d;
            update(n, b, c, d);
        }
        else {
            cin >> b >> c;
            cout << sum(c) - sum(b - 1) << '\n';
        }
    }

    return 0;
}
