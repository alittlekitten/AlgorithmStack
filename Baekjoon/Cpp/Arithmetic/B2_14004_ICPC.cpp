#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14004 ICPC
	// 수학
	long long a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << (c + d) / (a - b);

	return 0;
}
