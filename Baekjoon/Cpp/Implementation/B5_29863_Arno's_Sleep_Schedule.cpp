#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 29863 Arno's Sleep Schedule
	// 구현
	int a, b;
	cin >> a >> b;
	if (a >= 20) cout << b - a + 24;
	else cout << b - a;

	return 0;
}
