#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 10103 주사위 게임
    // 구현
    int n, a, b;
    int p1 = 100;
    int p2 = 100;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        if (a > b) p2 -= a;
        else if (b > a) p1 -= b;
    }

    cout << p1 << '\n' << p2;

    return 0;
}
