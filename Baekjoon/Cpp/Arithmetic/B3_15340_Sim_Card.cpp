#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15340 Sim Card
	// 수학
	int c, d;
    while (1) {
        cin >> c >> d;
        if (c == 0 && d == 0) break;

        cout << min(min(30 * c + 40 * d, 35 * c + 30 * d), 40 * c + 20 * d) << '\n';
    }

	return 0;
}
