#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 27219 Робинзон Крузо
	// 구현
	int n;
	string s = "";
	cin >> n;
	
	while (n) {
		if (n >= 5) {
			s += "V";
			n -= 5;
		}
		else {
			s += "I";
			--n;
		}
	}

	cout << s;

	return 0;
}
