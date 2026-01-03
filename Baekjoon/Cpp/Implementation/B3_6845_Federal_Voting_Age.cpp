#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 6845 Federal Voting Age
	// 구현
	int n, y, m, d;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> y >> m >> d;
		if (y < 1989) cout << "Yes";
		else if (y > 1989) cout << "No";
		else if (m < 2) cout << "Yes";
		else if (m > 2) cout << "No";
		else if (d <= 27) cout << "Yes";
		else cout << "No";

		cout << '\n';
	}

	return 0;
}
