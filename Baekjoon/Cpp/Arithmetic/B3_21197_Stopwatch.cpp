#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 21197 Stopwatch
	// 수학
	int n, t;
	cin >> n;

	bool chk = false;
	int saveTime = 0;
	int lastTime = 0;
	for (int i = 0; i < n; ++i) {
		cin >> t;
		if (chk) lastTime += t - saveTime;

		chk = !chk;
		saveTime = t;
	}

	if (chk) cout << "still running";
	else cout << lastTime;

	return 0;
}
