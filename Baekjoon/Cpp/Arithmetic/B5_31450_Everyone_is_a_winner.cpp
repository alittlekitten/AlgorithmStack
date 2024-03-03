#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31450 Everyone is a winner
	// 수학
	int m, k;
	cin >> m >> k;
	if (m % k) cout << "No";
	else cout << "Yes";

	return 0;
}
