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

    // 11443 짝수번째 피보나치 수의 합
    // 행렬곱 + 구현 (11444 피보나치 수 6 코드를 거의 그대로 가져다 쓰면 된다!)
    // 1 0  단위 행렬에다가   1 1   2 * 2 행렬을 n만큼 중복해서 곱하면 첫 열의 첫 행에 n+1번째 피보나치 값, 두 번째 행에 n번재 피보나치 값이 등장!
    // 0 1                    1 0

    // 그리고 홀수번째 피보나치 수의 합과 같은 방식으로 짝수번째의 피보나치 수의 합을 구할 수 있다.
    // 위 내용에 fibo(1) + fibo(3) + ... + fibo(n) = fibo(n+1) - 1 (n % 2 == 0) 이라는 것을 깨달으면 된다. (n이 홀수면 fibo(n) - 1)
    // (엄밀하게 따지면 fibo(n+1) - fibo(1) 이다.)
    // 홀수번째 피보나치 수의 합과 같은 방식으로 증명하면 아래와 같다.
    // fibo(n) = fibo(n-1) + fibo(n-2)에서 fibo(n-2)를 fibo(n-3)과 fibo(n-4)의 합으로 쪼개고, fibo(n-4)를 fibo(n-5)와 fibo(n-6)의 합으로 쪼개고..를 반복하면 마지막까지 가서 fibo(1)인 1이 더해지는데, 짝수번째 피보나치의 합에서는 이걸 마지막에 빼주면 된다.
    // 해당 내용에 대한 자세한 증명 및 더 많은 자료는 http://www.koreascience.or.kr/article/JAKO200817639068191.pdf 를 참고
    
    ll n;
    cin >> n;
    if (n % 2) cout << fibo(n) - 1; // 홀수번째면 fibo(n) - 1 출력
    else cout << fibo(n + 1) - 1; // 짝수번째면 fibo(n + 1) - 1 출력

    return 0;
}
