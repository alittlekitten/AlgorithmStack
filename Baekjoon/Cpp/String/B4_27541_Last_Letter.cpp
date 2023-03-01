#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 27541 Last Letter
	// 문자열
	string s;
	int n;
	cin >> n >> s;
	if (s[n - 1] == 'G') for (int i = 0; i < n - 1; ++i) cout << s[i];
	else {
		for (int i = 0; i < n; ++i) cout << s[i];
		cout << "G";
	}
	
	return 0;
}
