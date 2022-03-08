#include <iostream>

using namespace std;

int multiple(int a, int b, int c) {
    if (b != 1) {
        long long result = multiple(a, b / 2, c);
        if (b % 2 == 1) return result % c * result % c * a % c; // result의 제곱은 최대 long long의 범위이기 때문에 a를 다시 곱해주기 전에 c로 나눠준 후에 a를 곱해준다
        else return result % c * result % c;
    }
    return a % c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 1629 곱셈
    // 재귀, 분할정복

    int a, b, c;
    cin >> a >> b >> c;

    cout << multiple(a, b, c);

    return 0;
}
