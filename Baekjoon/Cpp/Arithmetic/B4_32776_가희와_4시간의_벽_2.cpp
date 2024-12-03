#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32776 가희와 4시간의 벽 2
	// 수학
	int s, ma, f, mb;
	cin >> s >> ma >> f >> mb;

	if (s <= ma + f + mb || s <= 240) cout << "high speed rail";
	else cout << "flight";

	return 0;
}
