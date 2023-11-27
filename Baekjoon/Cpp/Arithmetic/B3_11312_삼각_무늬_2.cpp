#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 11312 삼각 무늬 - 2
    // 수학
    int t;
    double a, b;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> a >> b;
        cout << (long long)ceil((a / b) * (a / b)) << '\n';
    }

    return 0;
}
