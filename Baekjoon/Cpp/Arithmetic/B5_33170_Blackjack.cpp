#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33170 ブラックジャック (Blackjack)
	// 수학
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b + c <= 21) cout << 1;
	else cout << 0;

	return 0;
}
