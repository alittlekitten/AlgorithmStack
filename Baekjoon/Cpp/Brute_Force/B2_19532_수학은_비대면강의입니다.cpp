#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 19532 수학은 비대면강의입니다
	// 브루트포스
	int a, b, c, d, e, f;
	bool chk = false;
	cin >> a >> b >> c >> d >> e >> f;
	for (int i = -999; i < 1000; ++i) {
		for (int j = -999; j < 1000; ++j) {
			if (a * i + b * j == c) {
				if (d * i + e * j == f) {
					cout << i << " " << j;
					return 0;
				}
			}
		}
	}

	return 0;
}
