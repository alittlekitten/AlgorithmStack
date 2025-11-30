#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34723 피막치
	// 수학
    int p, m, c, x; 
    cin >> p >> m >> c >> x;
    int ans = 1000000000;

    for (int i = 1; i <= p; ++i) {
        for (int j = 1; j <= m; ++j) {
            for (int k = 1; k <= c; ++k) {
                int t = abs(x - (i + j) * (j + k));
                if (ans > t) ans = t;
            }
        }
    }
    cout << ans;

	return 0;
}
