#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33046 Alea Iacta Est
	// 수학
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << (a + b + c + d - 2) % 4 + 1;

	return 0;
}
