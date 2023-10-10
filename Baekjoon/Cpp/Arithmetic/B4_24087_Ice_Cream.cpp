#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 24087 ice Cream
	// 수학
	double s, a, b;
	int price = 250;
	cin >> s >> a >> b;
	if (s <= a) cout << price;
	else cout << price + 100 * ceil((s - a) / b);

	return 0;
}
