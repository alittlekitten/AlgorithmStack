#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15236 Dominos
	// 수학
	int n;
	cin >> n;
	cout << n * (n + 1) * (n + 2) / 2;

	return 0;
}
