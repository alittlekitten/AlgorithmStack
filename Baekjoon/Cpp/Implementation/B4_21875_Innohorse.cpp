#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 21875 Innohorse
	// 구현
	string x, y;
	cin >> x >> y;

	cout << min(abs(x[0] - y[0]), abs(x[1] - y[1])) << " " << max(abs(x[0] - y[0]), abs(x[1] - y[1]));

	return 0;
}
