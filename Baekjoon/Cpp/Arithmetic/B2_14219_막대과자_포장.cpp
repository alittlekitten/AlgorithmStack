#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14219 막대과자 포장
	// 수학
	int n, m;
	cin >> n >> m;

	if (n * m % 6 == 0 || n * m % 6 == 3) cout << "YES";
	else cout << "NO";

	return 0;
}
