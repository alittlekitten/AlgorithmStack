#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 32978 아 맞다 마늘
	// 문자열
	int n;
	string s;
	set<string> ss;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		ss.insert(s);
	}

	for (int i = 0; i < n - 1; ++i) {
		cin >> s;
		ss.erase(ss.find(s));
	}

	cout << *ss.begin();

	return 0;
}
