#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 3049 다각형의 대각선
	// 수학
	int n;
	cin >> n;
	cout << n * (n - 1) * (n - 2) * (n - 3) / 24;

	return 0;
}
