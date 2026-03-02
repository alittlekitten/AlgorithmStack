#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 21185 Some Sum
	// 수학
	int n;
	cin >> n;

	if (n % 2 == 1) cout << "Either";
	else {
		if (n / 2 % 2 == 0) cout << "Even";
		else cout << "Odd";
	}

	return 0;
}
