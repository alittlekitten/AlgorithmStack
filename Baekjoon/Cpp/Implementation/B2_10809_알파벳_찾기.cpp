#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int a[26] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
	string s;
	cin >> s;

	
	for (int i = 0; i < s.size(); ++i) {
		int tmp = s[i] - 97;
		if (a[tmp] == -1) a[tmp] = i;
	}

	for (int i = 0; i < 26; ++i) {
		if (i != 25) cout << a[i] << " ";
		else cout << a[i];
	}

	return 0;
}
