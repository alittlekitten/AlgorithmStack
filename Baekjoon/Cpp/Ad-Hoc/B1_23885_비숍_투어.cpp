#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 23885 비숍 투어
	// 애드혹
	int N, M, sx, sy, ex, ey; 
	cin >> N >> M >> sx >> sy >> ex >> ey;
	if (sx == ex && sy == ey) cout << "YES";
	else if (N == 1 || M == 1) cout << "NO";
	else if ((sx + sy + ex + ey) % 2) cout << "NO";
	else cout << "YES";

	return 0;
}
