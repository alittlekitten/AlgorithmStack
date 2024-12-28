#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> fail(string s) {
	vector<int> v(s.size());
	int tmp = 0;
	for (int i = 1; i < s.size(); ++i) {
		while (tmp > 0 && s[tmp] != s[i]) tmp = v[tmp - 1];
		if (s[i] == s[tmp]) v[i] = ++tmp;
	}
	return v;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1786 찾기
	// 문자열, KMP
	string t, p;
	getline(cin, t); // 공백 가능
	getline(cin, p); // 공백 가능

	// 실패함수 구하기
	vector<int> f = fail(p);

	int tmp = 0;
	vector<int> v;
	for (int i = 0; i < t.size(); ++i) {
		while (tmp > 0 && t[i] != p[tmp]) tmp = f[tmp - 1];
		if (t[i] == p[tmp]) ++tmp;
		// p가 전부 나왔으면 v에 push_back
		if (tmp == p.size()) {
			v.push_back(i + 2 - p.size());
			tmp = f[tmp - 1];
		}
	}

	cout << v.size() << '\n';
	for (int i = 0; i < v.size(); ++i) cout << v[i] << " ";

	return 0;
}
