#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int inputA, inputB, a, b, c;

	cin >> inputA >> inputB;
	a = inputA;
	b = inputB;
	
	// GCD
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	cout << a << "\n" << inputA * inputB / a;
	
	return 0;
	
}
