#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 27855 Cornhole
	// 수학
	int h1, b1, h2, b2; 
	cin >> h1 >> b1 >> h2 >> b2;

	if (3 * h1 + b1 > 3 * h2 + b2) {
		cout << "1 " << (3 * h1 + b1) - (3 * h2 + b2);
	}
	else if (3 * h2 + b2 > 3 * h1 + b1) {
		cout << "2 " << (3 * h2 + b2) - (3 * h1 + b1);
	}
	else {
		cout << "NO SCORE";
	}

	return 0;
}
