#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34449 King Arthur's Round Table
	// 수학
	double d, w, n;
	double pi = 3.14159;

	cin >> d >> w >> n;
	if ((d * pi / n) > w) cout << "YES";
	else cout << "NO";

	return 0;
}
