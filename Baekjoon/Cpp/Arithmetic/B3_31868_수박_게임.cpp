#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31868 수박 게임
	// 수학
	int n, k;
	cin >> n >> k;
	--n;
	while (n--) k /= 2;

	cout << k;

	return 0;
}
