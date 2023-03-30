#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 27889 특별한 학교 이름
	// 문자열
	string s;
	cin >> s;
	if (s == "NLCS") cout << "North London Collegiate School";
	else if (s == "BHA") cout << "Branksome Hall Asia";
	else if (s == "KIS") cout << "Korea International School";
	else if (s == "SJA") cout << "St. Johnsbury Academy";

	return 0;
}
