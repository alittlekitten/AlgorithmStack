#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 28224 Final Price
	// 수학
	int n, input;
	int price = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		price += input;
	}
	cout << price;

	return 0;
}
