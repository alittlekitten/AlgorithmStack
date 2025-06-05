#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 20332 Divvying Up
	// 수학
	int n, input;
	cin >> n;

	int sum = 0;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		sum += input;
	}

	if (sum % 3) cout << "no";
	else cout << "yes";

	return 0;
}
