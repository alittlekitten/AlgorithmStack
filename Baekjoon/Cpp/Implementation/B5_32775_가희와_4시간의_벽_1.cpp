#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32775 가희와 4시간의 벽 1
	// 구현
	int s, f;
	cin >> s >> f;
	if (s > f) cout << "flight";
	else cout << "high speed rail";

	return 0;
}
