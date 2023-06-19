#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 28235 코드마스터 2023
	// 구현
	string s;
	cin >> s;
	if (s == "SONGDO") cout << "HIGHSCHOOL";
	else if (s == "CODE") cout << "MASTER";
	else if (s == "2023") cout << "0611";
	else cout << "CONTEST";

	return 0;
}
