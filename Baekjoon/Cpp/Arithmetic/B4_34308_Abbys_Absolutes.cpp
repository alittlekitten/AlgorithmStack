#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34308 Abby's Absolutes
	// 수학
    int n, k, x;
    cin >> n >> k;

    for (int i = 0; i < k; ++i) {
        cin >> x;

        if (n - x < x - 1) cout << n << " ";
        else cout << 1 << " ";
    }

	return 0;
}
