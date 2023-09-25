#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 29731 2033년 밈 투표
	// 구현
	string s;
	int n;
	bool ans = true;
	cin >> n;
	getline(cin, s);
	for (int i = 0; i < n; ++i) {
		getline(cin, s);
		if (s != "Never gonna give you up"
			&& s != "Never gonna let you down"
			&& s != "Never gonna run around and desert you"
			&& s != "Never gonna make you cry"
			&& s != "Never gonna say goodbye"
			&& s != "Never gonna tell a lie and hurt you"
			&& s != "Never gonna stop") {
			ans = false;
			break;
		}
	}
	if (ans) cout << "No";
	else cout << "Yes";

	return 0;
}
