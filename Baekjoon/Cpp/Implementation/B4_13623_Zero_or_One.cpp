#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13623 Zero or One
	// 구현
	int a, b, c;
	cin >> a >> b >> c;
	if (a == b && b != c) cout << "C";
	else if (b == c && a != b) cout << "A";
	else if (c == a && a != b) cout << "B";
	else cout << "*";

	return 0;
}
