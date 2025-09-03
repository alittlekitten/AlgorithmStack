#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 26264 빅데이터? 정보보호!
	// 문자열
	int n;
	string s;
	int cnt[200] = { 0 };
	cin >> n >> s;
	for (char c : s) ++cnt[c];

	if (cnt['b'] > cnt['s']) cout << "bigdata?";
	else if (cnt['b'] < cnt['s']) cout << "security!";
	else cout << "bigdata? security!";

	return 0;
}
