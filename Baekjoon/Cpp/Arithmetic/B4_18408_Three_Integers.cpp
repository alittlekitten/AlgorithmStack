#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	// 18408 Three Integers
	// 수학
	int a;
	int one = 0;
	int two = 0;
	for (int i = 0; i < 3; ++i) {
		cin >> a;
		if (a == 1) ++one;
		else ++two;
	}
	if (one > two) cout << "1";
	else cout << "2";

	return 0;
}
