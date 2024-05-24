#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 3507 Automated Telephone Exchange
	// 수학
	int n;
	cin >> n;
	if (n > 198) cout << 0;
	else cout << 199 - n;

	return 0;
}
