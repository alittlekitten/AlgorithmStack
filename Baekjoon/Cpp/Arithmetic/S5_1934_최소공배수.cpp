#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 1934 최소공배수
    // 수학
    int t, a, b;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> a >> b;
        cout << lcm(a, b) << '\n';
    }

    return 0;
}
