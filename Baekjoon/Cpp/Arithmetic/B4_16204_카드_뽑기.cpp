#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 16204 카드 뽑기
    // 수학
    int n, m, k;
    cin >> n >> m >> k;
    cout << min(m, k) + min(n-m, n-k);

    return 0;
}
