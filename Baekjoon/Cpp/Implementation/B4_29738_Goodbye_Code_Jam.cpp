#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 29738 Goodbye, Code Jam
	// 구현
	int t, n;
	string s = "";

	cin >> t;
	for (int i = 1; i <= t; ++i) {
		cin >> n;

		if (n > 4500) s = "Round 1\n";
		else if (n > 1000) s = "Round 2\n";
		else if (n > 25) s = "Round 3\n";
		else s = "World Finals\n";

		cout << "Case #" << i << ": " << s;
	}

	return 0;
}
