#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 12756 고급 여관
	// 수학
	int a1, a2, b1, b2;
	cin >> a1 >> a2 >> b1 >> b2;

	int a = (a2 + b1 - 1) / b1;
	int b = (b2 + a1 - 1) / a1;
	if (a < b) cout << "PLAYER B";
	else if (a > b) cout << "PLAYER A";
	else cout << "DRAW";

	return 0;
}
