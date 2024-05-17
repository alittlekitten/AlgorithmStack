#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 10205 헤라클레스와 히드라
	// 문자열
	int k, h;
	string s;

	cin >> k;
	for (int i = 1; i <= k; ++i) {
		cin >> h >> s;
		for (int j = 0; j < s.size(); ++j) {
			if (s[j] == 'c') ++h;
			else --h;
		}
		cout << "Data Set " << i << ":\n" << h << '\n' << '\n';
	}

	return 0;
}
