#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32305 Farmers' Market
	// 수학
	int a, b, d;
	cin >> a >> b >> d;
	cout << (a * b + 11) / 12 * d;

	return 0;
}
