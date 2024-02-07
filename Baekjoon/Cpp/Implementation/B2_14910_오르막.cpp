#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14910 오르막
	// 구현
	int input;
	bool chk = true;
	cin >> input;
	int before = input;
	while (cin >> input) {
		if (before > input) {
			chk = false;
			break;
		}
		else before = input;
	}

	if (chk) cout << "Good";
	else cout << "Bad";

	return 0;
}
