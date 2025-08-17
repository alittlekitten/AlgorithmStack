#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11656 접미사 배열
	// 문자열
	string s;
	vector<string> v;
	cin >> s;

	for (int i = 0; i < s.size(); ++i) {
		v.push_back(s.substr(i, s.size() - i));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); ++i) cout << v[i] << '\n';

	return 0;
}
