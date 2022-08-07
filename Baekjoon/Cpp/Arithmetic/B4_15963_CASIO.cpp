#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 15963 CASIO
    // 수학
    long long n, m;
    cin >> n >> m;
    if (n == m) cout << 1;
    else cout << 0;

    return 0;
}
