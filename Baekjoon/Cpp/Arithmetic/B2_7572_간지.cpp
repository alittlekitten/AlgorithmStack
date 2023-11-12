#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 7572 간지
	// 수학
	int n;
	cin >> n;
	cout << (char)((n + 8) % 12 + 'A') << (n + 6) % 10;

	return 0;
}
