#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25829 Presidential Election
	// 구현
	int n, elec, x, y;
	cin >> n;

	int majority1 = 0;
	int majority2 = 0;
	int electoral1 = 0;
	int electoral2 = 0;
	for (int i = 0; i < n; ++i) {
		cin >> elec >> x >> y;
		majority1 += x;
		majority2 += y;
		if (x > y) electoral1 += elec;
		else electoral2 += elec;
	}

	if (majority1 > majority2 && electoral1 > electoral2) cout << 1;
	else if (majority1 < majority2 && electoral1 < electoral2) cout << 2;
	else cout << 0;

	return 0;
}
