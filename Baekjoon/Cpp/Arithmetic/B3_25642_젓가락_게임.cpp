#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25642 젓가락 게임
	// 수학
	int a, b;
	cin >> a >> b;

	while (1) {
		b += a;
		if (b >= 5) {
			cout << "yt";
			break;
		}

		a += b;
		if (a >= 5) {
			cout << "yj";
			break;
		}
	}

	return 0;
}
