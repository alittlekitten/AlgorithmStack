#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15921 수찬은 마린보이야!!
	// 수학
	int n, input;
	cin >> n;

	int sum = 0;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		sum += input;
	}
	if (sum == 0) {
		cout << "divide by zero";
		return 0;
	}
	cout << "1.00";

	return 0;
}
