#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 25191 치킨댄스를 추는 곰곰이를 본 임스
    // 수학
    int n, a, b;
    cin >> n >> a >> b;
    cout << min(n, a / 2 + b);

    return 0;
}
