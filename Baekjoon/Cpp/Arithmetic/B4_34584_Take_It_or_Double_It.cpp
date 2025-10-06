#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34584 Take It or Double It
	// 수학
	int x, d;
	cin >> x >> d;
	if (x * 2 > d) cout << "take it";
	else cout << "double it";

	return 0;
}
