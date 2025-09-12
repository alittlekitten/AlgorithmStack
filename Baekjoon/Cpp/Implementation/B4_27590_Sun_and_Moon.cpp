#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 27590 Sun and Moon
	// 구현
	int ds, ys, dm, ym;
	cin >> ds >> ys >> dm >> ym;

	ds = ys - ds;
	dm = ym - dm;
	while (ds != dm) {
		if (ds < dm) ds += ys;
		else dm += ym;
	}

	cout << ds;

	return 0;
}
