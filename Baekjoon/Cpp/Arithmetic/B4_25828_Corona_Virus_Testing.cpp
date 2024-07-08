#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25828 Corona Virus Testing
	// 수학
	int g, p, t;
	cin >> g >> p >> t;

	int group = g + p * t;
	int personal = g * p;

	if (personal < group) cout << 1;
	else if (personal > group) cout << 2;
	else cout << 0;

	return 0;
}
