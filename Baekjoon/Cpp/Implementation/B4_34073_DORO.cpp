#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34073 DORO
	// 구현
	int n;
	string s;
	cin >> n;
	
	for (int i = 0; i < n; ++i) {
		cin >> s;
		cout << s << "DORO ";
	}

	return 0;
}
