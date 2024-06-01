#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31798 단원평가
	// 수학
	int a, b, c;
	cin >> a >> b >> c;

	if (a == 0) cout << c * c - b;
	if (b == 0) cout << c * c - a;
	if (c == 0) cout << sqrt(a + b);

	return 0;
}
