#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34687 라면 끓여 먹자 야호
	// 수학
	double n, m;
	cin >> n >> m;
	if (n * 81 / 100 <= m) cout << "yaho";
	else cout << "no";

	return 0;
}
