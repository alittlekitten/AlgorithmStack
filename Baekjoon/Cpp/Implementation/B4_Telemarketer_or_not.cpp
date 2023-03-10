#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 16017 Telemarketer or not
	// 구현
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if ((a == 8 || a == 9) && (b == c) && (d == 8 || d == 9)) cout << "ignore";
	else cout << "answer";

	return 0;
}
