#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 18127 모형결정
	// 수학
	long long a, b;
	cin >> a >> b;

	cout << ((b + 1) * (2 + b * (a - 2))) / 2;

	return 0;
}
