#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34795 An Elephant Problem
	// 수학
	int m, d;
	cin >> m >> d;

	cout << (d + m - 1) / m;

	return 0;
}
