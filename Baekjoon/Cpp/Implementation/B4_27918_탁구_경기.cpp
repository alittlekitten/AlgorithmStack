#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 27918 탁구 경기
	// 구현
	int x = 0;
	int y = 0;
	int n;
	char input;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		if (input == 'D') ++x;
		else ++y;
		if (abs(x - y) >= 2) break;
	}
	cout << x << ":" << y;

	return 0;
}
