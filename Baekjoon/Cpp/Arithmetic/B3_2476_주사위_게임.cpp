#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2476 주사위 게임
	// 수학
    int n;
    cin >> n;

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int a, b, c;
        cin >> a >> b >> c;

        int tmp = 0;
        if (a == b && b == c) tmp = 10000 + a * 1000;
        else if (a == b || a == c) tmp = 1000 + a * 100;
        else if (b == c) tmp = 1000 + b * 100;
        else tmp = max({ a, b, c }) * 100;
        if (tmp > ans) ans = tmp;
    }

    cout << ans;

	return 0;
}
