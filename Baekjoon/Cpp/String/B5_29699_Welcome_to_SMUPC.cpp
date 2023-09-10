#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 29699 Welcome to SMUPC!
	// 문자열
	int n;
	string s = "WelcomeToSMUPC";
	cin >> n;
	cout << s[(n - 1) % 14];

	return 0;
}
