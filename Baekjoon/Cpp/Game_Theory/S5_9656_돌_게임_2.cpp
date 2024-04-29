#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(NULL);

	// 9656 돌 게임 2
	// 수학, 게임이론
	int n;
	cin >> n;
	if (n % 2) cout << "CY";
	else cout << "SK";

	return 0;
}
