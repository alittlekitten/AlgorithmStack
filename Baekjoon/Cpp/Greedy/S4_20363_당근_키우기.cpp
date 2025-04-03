#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 20363 당근 키우기
	// 그리디
	int x, y;
	cin >> x >> y;

	cout << max(x, y) + min(x, y) + min(x, y) / 10;

	return 0;
}
