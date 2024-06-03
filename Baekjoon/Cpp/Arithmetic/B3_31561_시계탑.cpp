#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31561 시계탑
	// 수학
	int m;
	cin >> m;

	if (m < 30) cout << m / 2 << ".";
	else cout << (m - 30) * 3 / 2 + 15 << ".";
	
	if (m % 2) cout << "5";
	else cout << "0";

	return 0;
}
