#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 21638 SMS from MCHS
	// 구현
	int t1, v1, t2, v2;
	cin >> t1 >> v1 >> t2 >> v2;
	if (t2 < 0 && v2 >= 10) cout << "A storm warning for tomorrow! Be careful and stay home if possible!";
	else if (t1 > t2) cout << "MCHS warns! Low temperature is expected tomorrow.";
	else if (v1 < v2) cout << "MCHS warns! Strong wind is expected tomorrow.";
	else cout << "No message";

	return 0;
}
