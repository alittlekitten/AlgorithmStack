#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1356 유진수
	// 문자열
	string n;
	cin >> n;

	int l = 1;
	for (int i = 0; i < n.size() - 1; ++i) {
		int r = 1;
		l *= n[i] - '0';
		for (int j = i + 1; j < n.size(); ++j) r *= n[j] - '0';
		if (l == r) {
			cout << "YES";
			return 0;
		}
	}

	cout << "NO";

	return 0;
}
