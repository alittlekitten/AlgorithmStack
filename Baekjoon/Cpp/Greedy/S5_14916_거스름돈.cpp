#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14916 거스름돈
	// 그리디
	int n;
	cin >> n;
	// n이 1이랑 3이면 절대 불가
	if (n == 1 || n == 3) cout << -1;
	else {
		if (n % 5 % 2) cout << n / 5 - 1 + (n % 5 + 5) / 2;
		else cout << n / 5 + n % 5 / 2;
	}

	return 0;
}
