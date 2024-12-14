#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 21354 Applen och paron
	// 수학
	int apple, pear, axel, petra;
	cin >> apple >> pear;
	axel = apple * 7;
	petra = pear * 13;
	if (axel > petra) cout << "Axel";
	else if (axel < petra) cout << "Petra";
	else cout << "lika";

	return 0;
}
