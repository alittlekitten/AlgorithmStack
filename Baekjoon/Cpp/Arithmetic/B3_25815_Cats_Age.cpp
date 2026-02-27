#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25815 Cat's Age
	// 수학
	int y, m;
	cin >> y >> m;

	int catMonths = y * 12 + m;
	int humanMonths = 0;

	if (catMonths <= 12) humanMonths = catMonths * 15;
	else if (catMonths <= 24) humanMonths = 15 * 12 + (catMonths - 12) * 9;
	else humanMonths = 15 * 12 + 9 * 12 + (catMonths - 24) * 4;

	cout << humanMonths / 12 << " " << humanMonths % 12;

	return 0;
}
