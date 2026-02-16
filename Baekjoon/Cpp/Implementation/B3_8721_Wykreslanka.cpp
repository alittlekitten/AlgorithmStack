#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 8721 Wykreślanka
	// 구현
    int n, x;
    cin >> n;

    int tmp = 1;
    int len = 0;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (x == tmp) ++tmp;
    }

    cout << n - tmp + 1;

	return 0;
}
