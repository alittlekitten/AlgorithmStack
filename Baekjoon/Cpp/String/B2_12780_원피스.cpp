#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 12780 원피스
	// 문자열
	string n, h;
	int ans = 0;
	cin >> n >> h;
	for (int i = 0; i < n.size() - h.size() + 1; ++i) {
		bool chk = true;
		for (int j = 0; j < h.size(); ++j) {
			if (n[i + j] != h[j]) {
				chk = false;
				break;
			}
		}
		if (chk) ++ans;
	}
	cout << ans << endl;

	return 0;
}
