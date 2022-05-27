#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 14924 폰 노이만과 파리
    // 수학
    int s, t, d;
    cin >> s >> t >> d;
    cout << d / (s * 2) * t;

    return 0;
}
