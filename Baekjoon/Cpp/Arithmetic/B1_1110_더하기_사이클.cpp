#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 1110 더하기 사이클
    // 수학
    int n;
    cin >> n;
    int tmp = n;
    int cnt = 0;
    if (tmp < 10) tmp = tmp * 10 + tmp;
    else tmp = (tmp % 10 * 10) + (tmp % 10 + tmp / 10) % 10;
    ++cnt;
    while (tmp != n) {
        if (tmp < 10) tmp = tmp * 10 + tmp;
        else tmp = (tmp % 10 * 10) + (tmp % 10 + tmp / 10) % 10;
        ++cnt;
    }
    cout << cnt;

    return 0;
}
