#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2711 오타맨 고창영
	// 문자열
	int t, n;
	string s;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> n >> s;
		for (int i = 0; i < s.size(); ++i) {
			if (n - 1 == i) continue;
			else cout << s[i];
		}
		cout << '\n';
	}
	
	return 0;
}    
