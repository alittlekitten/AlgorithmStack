#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 2530 인공지능 시계
    // 수학
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << (a + (b + (c + d) / 60) / 60) % 24 << " " << (b + (c + d) / 60) % 60 << " " << (c + d) % 60;

    return 0;
}
