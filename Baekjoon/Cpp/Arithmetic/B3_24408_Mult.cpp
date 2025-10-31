#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 24408 Mult!
	// 수학
	int n, a, b; 
	cin >> n >> a;
	for (int i = 1; i < n; ++i) {
		cin >> b;
		if (b % a == 0) {
			cout << b << '\n';
			++i;
			if (i < n) cin >> a;
		}
	}

	return 0;
}
