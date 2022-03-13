#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 3004 체스판 조각
    // 수학
    int n;
    cin >> n;

    int a = 1;
    int b = 1;
    a += n / 2 + n % 2;
    b += n / 2;

    cout << a * b;

    return 0;
}
