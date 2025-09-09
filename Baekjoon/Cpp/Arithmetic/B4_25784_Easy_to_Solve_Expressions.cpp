#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25784 Easy-to-Solve Expressions
	// 수학
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b == c || b + c == a || c + a == b) cout << 1;
	else if (a * b == c || b * c == a || c * a == b) cout << 2;
	else cout << 3;

	return 0;
}
