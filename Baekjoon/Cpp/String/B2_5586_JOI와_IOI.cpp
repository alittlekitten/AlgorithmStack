#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 5586 JOI와 IOI
  // 문자열
	int joi = 0;
	int ioi = 0;
	string s;
	cin >> s;
	int slen = s.length();
	for (int i = 0; i < slen - 2; i++) {
		if (s.substr(i, 3) == "JOI") joi++;
		else if (s.substr(i, 3) == "IOI") ioi++;
	}

	cout << joi << '\n' << ioi;

	return 0;
}
