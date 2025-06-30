#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 3208 gus
	// 구현
	int m, n;
	cin >> m >> n;
	
	int ans = 1;
	bool tmp = true;
	while (m > 1 && n > 1) {
		if (tmp) --m;
		else --n;
		++ans;
		tmp = !tmp;
	}
	cout << ans;

	return 0;
}
