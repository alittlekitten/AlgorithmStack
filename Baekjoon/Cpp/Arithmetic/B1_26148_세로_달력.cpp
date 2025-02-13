#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26148 세로 달력
	// 수학
	int n, d;
	cin >> n >> d;

	if (n % 4 == 0 && (n % 100 != 0 || n % 400 == 0)) cout << 30;
	else cout << 29;

	return 0;
}
