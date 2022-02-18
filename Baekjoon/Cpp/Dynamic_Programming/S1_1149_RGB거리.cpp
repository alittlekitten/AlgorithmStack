#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 1149 RGB거리
	// dp

	int n;
	int input1, input2, input3;
	int tmpA, tmpB, tmpC;
	int a, b, c;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input1 >> input2 >> input3;
		if (i == 0) {
			a = input1;
			b = input2;
			c = input3;
		}
		else {
			tmpA = input1 + min(b, c);
			tmpB = input2 + min(a, c);
			tmpC = input3 + min(a, b);

			a = tmpA;
			b = tmpB;
			c = tmpC;
		}
	}
	
	cout << min({ a, b, c });
	
	return 0;
}
