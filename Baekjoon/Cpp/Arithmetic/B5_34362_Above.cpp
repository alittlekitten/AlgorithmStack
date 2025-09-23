#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34362 Above 
	// 수학
	double n;
	cin >> n;

	cout << fixed;
	cout.precision(4);
	cout << n - 0.3;

	return 0;
}
