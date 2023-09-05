#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 24075 Calculation
	// 수학
	int a, b;
	cin >> a >> b;
	int sum = a + b;
	int sub = a - b;
	cout << max(sum, sub) << '\n' << min(sum, sub);

	return 0;
}
