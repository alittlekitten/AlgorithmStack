#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	// 4880 다음수
	// 수학
	int a, b, c;
	while (1) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) break;
		if (b - a == c - b) cout << "AP " << c + b - a << '\n';
		else cout << "GP " << c * (b / a) << '\n';
	}

	return 0;
}
