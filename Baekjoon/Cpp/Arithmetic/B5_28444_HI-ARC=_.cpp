#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 28444 HI-ARC=?
	// 수학
	int h, i, a, r, c;
	cin >> h >> i >> a >> r >> c;
	cout << h * i - a * r * c;

	return 0;
}
