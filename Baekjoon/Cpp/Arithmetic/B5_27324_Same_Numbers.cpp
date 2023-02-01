#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 27324 Same Numbers
	// 수학
	int n;
	cin >> n;
	if (n % 10 == n / 10) cout << 1;
	else cout << 0;

	return 0;
}
