#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33191 Yalda
	// 구현
	int b, w, p, n;
	cin >> b >> w >> p >> n;
	if (b >= w) cout << "Watermelon";
	else if (b >= p) cout << "Pomegranates";
	else if (b >= n) cout << "Nuts";
	else cout << "Nothing";

	return 0;
}
