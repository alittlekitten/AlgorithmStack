#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34454 Roller Coaster Ride
	// 수학
	int n, c, p;
	cin >> n >> c >> p;
	
	if (n > c * p) cout << "no";
	else cout << "yes";

	return 0;
}
