#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 27294 몇개고?
	// 구현
	int t, s;
	cin >> t >> s;
	if (t >= 12 && t <= 16 && s == 0) cout << 320;
	else cout << 280;

	return 0;
}
