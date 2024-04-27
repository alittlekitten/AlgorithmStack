#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(NULL);

	// 9661 돌 게임 7
	// 수학
	long long n;
	cin >> n;
	if (n % 5 == 0 || n % 5 == 2) cout << "CY";
	else cout << "SK";

	return 0;
}
