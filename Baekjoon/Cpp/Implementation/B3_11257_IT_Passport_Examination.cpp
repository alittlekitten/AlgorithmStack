#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11257 IT Passport Examination
	// 구현
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int num, a, b, c;
		string chk = "PASS";
		cin >> num >> a >> b >> c;
		if (a < 35 * 0.3 || b < 25 * 0.3 || c < 40 * 0.3 || a + b + c < 55) chk = "FAIL";
		cout << num << " " << a + b + c << " " << chk << '\n';
	}
	
	return 0;
}
