#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2154 수 이어 쓰기 3
	// 문자열
	int n, idx;
	string str = "";
	cin >> n;
	for (int i = 1; i <= n; ++i) str += to_string(i);
	idx = str.find(to_string(n));
	cout << idx + 1;

	return 0;
}
