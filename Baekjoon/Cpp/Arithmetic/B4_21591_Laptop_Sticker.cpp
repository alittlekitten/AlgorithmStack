#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 21591 Laptop Sticker
	// 수학
	int w1, w2, h1, h2;
	cin >> w1 >> h1 >> w2 >> h2;
	if (w1 - w2 >= 2 && h1 - h2 >= 2) cout << 1;
	else cout << 0;
	
	return 0;
}
