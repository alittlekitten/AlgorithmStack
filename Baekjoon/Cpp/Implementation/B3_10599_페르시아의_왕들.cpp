#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	cout.tie(NULL);

	// 10599 페르시아의 왕들
	// 구현
	int a, b, c, d;
	while (1) {
		cin >> a >> b >> c >> d;
		if (!a && !b && !c && !d) break;
		cout << c - b << ' ' << d - a << '\n';
	}

	return 0;
}
