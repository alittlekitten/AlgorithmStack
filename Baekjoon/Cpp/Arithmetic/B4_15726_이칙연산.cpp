#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 15726 이칙연산
    // 수학
    double a, b, c;
    cin >> a >> b >> c;
    if (a * b / c > a / b * c) cout << (long long)(a * b / c);
    else cout << (long long)(a / b * c);
  
    return 0;
}
