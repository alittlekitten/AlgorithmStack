#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1267 핸드폰 요금
	// 수학
	int n, input;
	int m = 0;
	int y = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		y += (input / 30 + 1) * 10;
		m += (input / 60 + 1) * 15;
	}
	if (m < y) cout << "M " << m;
	else if (m > y) cout << "Y " << y;
	else cout << "Y M " << m;

	return 0;
}
