#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31833 온데간데없을뿐더러
	// 문자열
	int n;
	string a, b, s;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		a += s;
	}
	for (int i = 0; i < n; ++i) {
		cin >> s;
		b += s;
	}

	if (a.size() > b.size()) cout << b;
	else if (a.size() < b.size()) cout << a;
	else {
		bool chk = false;
		for (int i = 0; i < n; ++i) {
			if (a[i] > b[i]) {
				cout << b;
				chk = true;
				break;
			} 
			else if (a[i] < b[i]) {
				cout << a;
				chk = true;
				break;
			}
		}
		if (!chk) cout << a;
	}

	return 0;
}
