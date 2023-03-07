#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 6778 Which Alien
	// 구현
	int a, b;
	cin >> a >> b;

	if (a >= 3 && b <= 4) cout << "TroyMartian\n";
	if (a <= 6 && b >= 2) cout << "VladSaturnian\n";
	if (a <= 2 && b <= 3) cout << "GraemeMercurian";

	return 0;
}
