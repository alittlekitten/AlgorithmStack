#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 3578 Holes
	// 구현
	int n;
	cin >> n;
	if (n == 0) cout << "1";
	else if (n == 1) cout << "0";
	else {
		if (n % 2 != 0) cout << "4";
		for (int i = 0; i < n / 2; ++i) cout << "8";
	}
	
	return 0;
}
