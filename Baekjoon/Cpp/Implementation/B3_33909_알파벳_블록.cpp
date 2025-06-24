#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33909 알파벳 블록
	// 구현
	int s, c, o, n;
	cin >> s >> c >> o >> n;

	c += o * 2;
	s += n;
	cout << min(c / 6, s / 3);

	return 0;
}
