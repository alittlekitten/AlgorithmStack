#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 10801 카드게임
	// 구현
	int a[10] = { 0 };
	int b[10] = { 0 };
	int aWin = 0;
	int bWin = 0;
	for (int i = 0; i < 10; ++i) cin >> a[i];
	for (int i = 0; i < 10; ++i) cin >> b[i];
	for (int i = 0; i < 10; ++i) {
		if (a[i] > b[i]) ++aWin;
		else if (a[i] < b[i]) ++bWin;
	}

	if (aWin > bWin) cout << "A";
	else if (aWin < bWin) cout << "B";
	else cout << "D";

	return 0;
}
