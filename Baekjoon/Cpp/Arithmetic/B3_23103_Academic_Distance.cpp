#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 23103 Academic Distance
	// 수학
    int n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1;

    int ans = 0;
    for (int i = 1; i < n; ++i) {
        cin >> x2 >> y2;
        ans += abs(x1 - x2) + abs(y1 - y2);
        x1 = x2;
        y1 = y2;
    }

    cout << ans;

	return 0;
}
