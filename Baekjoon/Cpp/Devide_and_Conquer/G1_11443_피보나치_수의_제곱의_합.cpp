#include <iostream>

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
    mat start = { {1,0},{0,1} }; // 단위행렬
    mat target = { {1,1},{1,0} }; // 피보나치용 로직
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

    // 11443 피보나치 수의 제곱의 합
    // 행렬곱 + 구현 (11444 피보나치 수 6 코드를 거의 그대로 가져다 쓰면 된다!)
    // 1 0  단위 행렬에다가   1 1   2 * 2 행렬을 n만큼 중복해서 곱하면 첫 열의 첫 행에 n+1번째 피보나치 값, 두 번째 행에 n번재 피보나치 값이 등장!
    // 0 1                    1 0

    // 여기에 귀납적인 추론을 곁들인다.
    // 피보나치 수의 제곱은 1 1 4 9 25 64 169.. 순으로 진행된다.
    // 그렇다면 합은 어떨까?
    // 1 2 6 15 40 104 273 순으로 진행된다.
    // 1 = 1 - 1 + 1
    // 2 = 4 - 1 - 1
    // 6 = 9 - 4 + 1
    // 15 = 25 - 9 - 1
    // 40 = 64 - 25 + 1
    // 짝수번째에서는 fibo(n)^2 - fibo(n-1)^2 - 1,
    // 홀수번째에서는 fibo(n)^2 - fibo(n-1)^2 + 1이 반복된다.
    // 또는 1 1 2 3 5 8 13에서 fibo(n) * fibo(n+1) 역시 fibo(1)^2 + ... + fibo(n)^2의 값이 된다.
    // 엄밀히 말하면 fibo(n) * fibo(n+1) + fibo(1)^2 - fibo(1) * fibo(2) 이다.
    // 해당 내용에 대한 엄밀한 증명 및 더 많은 자료는 http://www.koreascience.or.kr/article/JAKO200817639068191.pdf 를 참고
    
    ll n;
    cin >> n;
    cout << fibo(n) * fibo(n + 1) % 1000000007;

    return 0;
}
