#include <iostream>
#include <vector>

using namespace std;
using ll = long long;
using mat = vector<vector<ll>>;

// 행렬 곱하는 함수
mat mulMat(mat& a, mat& b) {
    mat tmp(2, vector<ll>(2)); // 2차원 배열 생성
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                tmp[i][j] += a[i][k] * b[k][j];
            }
            tmp[i][j] %= 1000000007; // 곱한걸 1000000007로 나눠줌 (long long이기 때문에 한번에 나눠줘도 무방)
        }
    }
    return tmp;
}

ll fibo(ll num) {
    mat start = {{1,0},{0,1}}; // 단위행렬
    mat target = {{1,1},{1,0}}; // 피보나치용 로직
    while (num > 0) { // 지수를 2로 나눠주면서 빠르게 곱하기
        if (num & 1) start = mulMat(target, start); // 나누다가 홀수인 경우 나머지 추가해주기
        target = mulMat(target, target);
        num /= 2;
    }
    return start[1][0];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 11444 피보나치 수 6
    // 행렬곱
    // 1 0  단위 행렬에다가   1 1   2 * 2 행렬을 n만큼 중복해서 곱하면 첫 열의 첫 행에 n+1번째 피보나치 값, 두 번째 행에 n번재 피보나치 값이 등장!
    // 0 1                    1 0
    ll n;
    cin >> n;
    cout << fibo(n);
}
