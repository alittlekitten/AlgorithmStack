#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 6830 It’s Cold Here!
	// 구현
	int n;
	string s, ans;
	int minValue = 201;
	while (1) {
		cin >> s >> n;
		if (n < minValue) {
			minValue = n;
			ans = s;
		}

		if (s == "Waterloo") break;
	}

	cout << ans;

	return 0;
}
