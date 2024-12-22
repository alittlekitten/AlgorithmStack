#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32929 UOS 문자열
	// 수학
	int x;
	cin >> x;
	if (x % 3 == 1) cout << "U";
	else if (x % 3 == 2) cout << "O";
	else cout << "S";

	return 0;
}
