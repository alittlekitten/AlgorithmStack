#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(NULL);

	// 31654 Adding Trouble
	// 수학
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b == c) cout << "correct!";
	else cout << "wrong!";

	return 0;
}
