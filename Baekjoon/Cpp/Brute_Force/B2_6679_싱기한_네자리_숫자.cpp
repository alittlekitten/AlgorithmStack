#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 6679 싱기한 네자리 숫자
	// 브루트포스
	int a, b, c;
	for (int i = 1000; i < 10000; ++i) {
		a = 0;
		b = 0;
		c = 0;

		for (int j = i; j > 0; j /= 10) a += j % 10;
		for (int j = i; j > 0; j /= 12) b += j % 12;
		for (int j = i; j > 0; j /= 16) c += j % 16;

		if (a == b && b == c) cout << i << '\n';
	}

	return 0;
}
