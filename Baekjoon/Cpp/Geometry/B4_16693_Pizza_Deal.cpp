#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 16693 Pizza Deal
  // 기하학
	double a, p1, r, p2;
	cin >> a >> p1 >> r >> p2;
	if (a * p2 > r * r * 3.1415926535 * p1) cout << "Slice of pizza";
	else cout << "Whole pizza";

	return 0;
}
