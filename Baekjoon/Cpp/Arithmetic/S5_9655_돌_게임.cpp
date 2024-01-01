#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 9655 돌 게임
	// 수학, DP
	int n;
	cin >> n;
	if (n % 2) cout << "SK";
	else cout << "CY";

	return 0;
}
