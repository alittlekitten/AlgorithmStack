#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1076 저항
	// 구현
	long long ans = 0;
	string r, c;
	for (int i = 0; i <= 2; ++i) {
		cin >> c;
		if (i < 2) {
			if (c == "black") r += "0";
			else if (c == "brown") r += "1";
			else if (c == "red") r += "2";
			else if (c == "orange") r += "3";
			else if (c == "yellow") r += "4";
			else if (c == "green") r += "5";
			else if (c == "blue") r += "6";
			else if (c == "violet") r += "7";
			else if (c == "grey") r += "8";
			else r += "9";
		}
		else {
			long long s = stoll(r);
			if (c == "black") ans = s;
			else if (c == "brown") ans = s * (long long)10;
			else if (c == "red") ans = s * (long long)100;
			else if (c == "orange") ans = s * (long long)1000;
			else if (c == "yellow") ans = s * (long long)10000;
			else if (c == "green") ans = s * (long long)100000;
			else if (c == "blue") ans = s * (long long)1000000;
			else if (c == "violet") ans = s * (long long)10000000;
			else if (c == "grey") ans = s * (long long)100000000;
			else ans = s * (long long)1000000000;
		}
	}
	cout << ans;

	return 0;
}
