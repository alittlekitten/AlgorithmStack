#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25288 영어 시험
	// 애드 혹
	int n;
	string s;
	cin >> n >> s;
	while (n--) cout << s;

	return 0;
}
