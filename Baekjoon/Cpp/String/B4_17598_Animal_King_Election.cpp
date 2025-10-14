#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 17598 Animal King Election
	// 문자열
	string s;
	int l = 0;
	int t = 0;

	for (int i = 0; i < 9; ++i) {
		cin >> s;
		if (s == "Lion") ++l;
		else ++t;
	}
	if (l < t) cout << "Tiger";
	else cout << "Lion";

	return 0;
}
