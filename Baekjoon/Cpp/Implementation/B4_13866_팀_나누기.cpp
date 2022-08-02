#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 13866 팀 나누기
    // 구현
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << abs((a + d) - (b + c));

    return 0;
}
