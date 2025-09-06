#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32604 Jumbled Scoreboards
	// 구현
	int n, a, b;
	bool chk = true;
	cin >> n;

	int aa = 0;
	int bb = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a >> b;
		if (aa > a || bb > b) {
			chk = false;
			break;
		}
		aa = a;
		bb = b;
	}

	if (chk) cout << "yes";
	else cout << "no";

	return 0;
}
