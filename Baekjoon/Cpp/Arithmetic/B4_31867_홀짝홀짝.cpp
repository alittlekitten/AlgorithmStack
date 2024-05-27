#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31867 홀짝홀짝
	// 수학
	int n;
	string k;
	cin >> n >> k;
	
	int cnt = 0; // cnt > 0이면 홀홀수, cnt < 0이면 짝짝수
	for (int i = 0; i < n; ++i) {
		if ((k[i] - '0') % 2) ++cnt;
		else --cnt;
	}

	if (cnt > 0) cout << 1;
	else if (cnt < 0) cout << 0;
	else cout << -1;

	return 0;
}
