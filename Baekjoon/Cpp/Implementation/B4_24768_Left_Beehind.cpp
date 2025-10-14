#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 24768 Left Beehind
	// 구현
	int x, y; 
	cin >> x >> y;
	while (x + y) {
		if (x + y == 13) cout << "Never speak again.";
		else if (x > y) cout << "To the convention.";
		else if (x < y) cout << "Left beehind.";
		else cout << "Undecided.";

		cout << '\n';
		cin >> x >> y;
	}

	return 0;
}
