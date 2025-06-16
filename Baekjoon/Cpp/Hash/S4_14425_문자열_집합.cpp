#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14425 문자열 집합
	// 해시
	int n, m;
	string s;
	map<string, bool> mm;
	cin >> n >> m;
	for (int i = 0; i < n; ++i){
		cin >> s;
		mm.insert(make_pair(s, true));
	}

	int ans = 0;
	for (int i = 0; i < m; ++i) {
		cin >> s;
		if (mm[s]) ++ans;
	}
	cout << ans;

	return 0;
}
