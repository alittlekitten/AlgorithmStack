#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	cout << min(min(h - y, y), min(w - x, x));
	return 0;
}
