#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
	return a > b;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11536 줄 세우기
	// 문자열
	int n;
	string s;
	vector<string> v;
	vector<string> inc;
	vector<string> dec;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> s;
		v.push_back(s);
		inc.push_back(s);
		dec.push_back(s);
	}

	sort(inc.begin(), inc.end());
	sort(dec.begin(), dec.end(), compare);

	if (v == inc) cout << "INCREASING";
	else if (v == dec) cout << "DECREASING";
	else cout << "NEITHER";

	return 0;
}
