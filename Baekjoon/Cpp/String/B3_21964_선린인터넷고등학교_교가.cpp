#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	// 21964 선린인터넷고등학교 교가
	// 문자열
	int n;
	string s;
	cin >> n >> s;
	cout << s.substr(s.size() - 5, s.size());

	return 0;
}
