#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32684 장기
	// 수학
	int input;
	int c = 0;
	int h = 3;
	int p[6] = { 26, 14, 10, 6, 6, 4 };
	for (int i = 0; i < 6; ++i) {
		cin >> input;
		c += p[i] * input;
	}

	for (int i = 0; i < 6; ++i) {
		cin >> input;
		h += p[i] * input;
	}

	if (c > h) cout << "cocjr0208";
	else cout << "ekwoo";

	return 0;
}
