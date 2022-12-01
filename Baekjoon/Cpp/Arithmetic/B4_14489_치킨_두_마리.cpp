#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	// 14489 치킨 두 마리
	// 수학
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b >= c * 2) cout << a + b - c * 2;
	else cout << a + b;

	return 0;
}