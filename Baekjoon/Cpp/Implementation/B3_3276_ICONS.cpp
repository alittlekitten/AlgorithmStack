#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 3276 ICONS
	// 구현
	int n;
	int a = 1;
	int b = 1;
	cin >> n;
	while (a * b < n) {
		if (a > b) ++b;
		else ++a;
	}
	cout << a << " " << b;

	return 0;
}    
