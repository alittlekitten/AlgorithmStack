#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 6321 IBM 빼기 1
	// 문자열
	int n;
	string s;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> s;
		cout << "String #" << i << '\n';
		string tmp = "";
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == 'Z') tmp += 'A';
			else tmp += s[i] + 1;
		}
		cout << tmp << '\n' << '\n';
	}
	
	return 0;
}    
