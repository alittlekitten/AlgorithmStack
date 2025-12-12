#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34722 출제자가 몇 명
	// 구현
    int n, s, c, a, r;
    cin >> n;

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        cin >> s >> c >> a >> r;
        if (s >= 1000 || c >= 1600 || a >= 1500 || (r <= 30 && r != -1)) ++ans;
    }

    cout << ans;

	return 0;
}
