#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 23825 SASA 모형을 만들어보자
    // 수학
    int n, m;
    cin >> n >> m;
    cout << min(n / 2, m / 2);

    return 0;
}
