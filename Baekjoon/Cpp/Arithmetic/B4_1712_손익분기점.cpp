#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

	// 1712 손익분기점
    // 수학

    int a, b, c;
    int cnt = 0;
    cin >> a >> b >> c;
    if (c - b <= 0) cnt = -1;
    else cnt = a / (c - b) + 1;

    cout << cnt;

    return 0;
}
