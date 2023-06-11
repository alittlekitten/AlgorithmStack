#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 18005 Even or Odd?
	// 수학
	int n;
	cin >> n;
	if (n % 2) cout << 0;
	else {
		if (n * (n + 1) / 2 % 2) cout << 1;
		else cout << 2;
	}

	return 0;
}
