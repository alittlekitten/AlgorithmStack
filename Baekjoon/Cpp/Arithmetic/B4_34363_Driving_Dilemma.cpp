#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34363 Driving Dilemma
	// 수학
	double s, d, t;
	cin >> s >> d >> t;
	
	if (s * t * 5280 / 3600 > d) cout << "MADE IT";
	else cout << "FAILED TEST";

	return 0;
}
