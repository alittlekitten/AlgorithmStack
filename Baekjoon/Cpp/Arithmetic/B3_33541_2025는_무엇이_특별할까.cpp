#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33541 2025는 무엇이 특별할까?
	// 수학
	int n;
	cin >> n;
	if (n < 2025) cout << 2025;
	else if (n < 3025) cout << 3025;
	else if (n < 9801) cout << 9801;
	else cout << -1;

	return 0;
}
