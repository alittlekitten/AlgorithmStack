#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34823 YCPC 점수
	// 수학
	int y, c, p;
	cin >> y >> c >> p;
	cout << min(min(y, p), c / 2);

	return 0;
}
