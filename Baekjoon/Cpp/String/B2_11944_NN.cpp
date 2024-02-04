#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11944 NN
	// 문자열
	int n, m;
	cin >> n >> m;
	string s;

	for (int i = 0; i < n; ++i) s += to_string(n);
	if (s.size() > m) cout << s.substr(0, m);
	else cout << s;

	return 0;
}
