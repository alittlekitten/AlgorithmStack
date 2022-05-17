#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

	  // 11653 소인수분해
    // 정수론 (소수)
    int n;
    cin >> n;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            cout << i << '\n';
            n /= i;
            --i;
        }
    }
    if (n != 1) cout << n;

    return 0;
}
