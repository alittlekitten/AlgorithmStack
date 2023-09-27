#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 24751 Betting
	// 수학
	double a, b;
	cin >> a >> b;
	
	double x = -a + sqrt(a * a - b);
	double y = -a - sqrt(a * a - b);
	if (x == y) cout << x << '\n';
	else cout << y << " " << x << '\n';

	return 0;
}
