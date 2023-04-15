#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	cout.tie(NULL);

	// 9366 삼각형 분류
	// 수학
	int t;
	cin >> t;
	for (int i = 1; i <= t; ++i) {
		int sides[3] = { 0 };
		cin >> sides[0] >> sides[1] >> sides[2];
		sort(sides, sides + 3);
		cout << "Case #" << i << ": ";
		if (sides[0] == sides[1] && sides[1] == sides[2]) cout << "equilateral\n";
		else if (sides[0] == sides[1] || sides[1] == sides[2]) {
			if (sides[0] + sides[1] <= sides[2]) cout << "invalid!\n";
			else cout << "isosceles\n";
		}
		else {
			if (sides[0] + sides[1] <= sides[2]) cout << "invalid!\n";
			else cout << "scalene\n";
		}
	}

	return 0;
}
