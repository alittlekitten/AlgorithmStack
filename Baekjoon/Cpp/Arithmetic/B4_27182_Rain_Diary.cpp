#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 27182 Rain Diary
	// 수학
	int x, y;
	cin >> x >> y;
	if (x > 7) cout << x - 7;
	else cout << y + 7;

	return 0;
}
