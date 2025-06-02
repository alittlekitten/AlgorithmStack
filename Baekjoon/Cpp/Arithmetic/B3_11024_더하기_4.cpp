#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11024 더하기 4
	// 수학
	int t;
	string s, tmp;
	cin >> t;
	cin.ignore();

	while (t--) {
		int sum = 0;
		getline(cin, s);

		istringstream ss(s);
		while (getline(ss, tmp, ' ')) {
			sum += stoi(tmp);
		}

		cout << sum << '\n';
	}

	return 0;
}
