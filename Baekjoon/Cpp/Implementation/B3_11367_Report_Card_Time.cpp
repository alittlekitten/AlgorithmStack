#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11367 Report Card Time
	// 구현
	int t, b;
	string a;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		cout << a << " ";
		if (b >= 97) cout << "A+";
		else if (90 <= b && b <= 96) cout << "A";
		else if (87 <= b && b <= 89) cout << "B+";
		else if (80 <= b && b <= 86) cout << "B";
		else if (77 <= b && b <= 79) cout << "C+";
		else if (70 <= b && b <= 76) cout << "C";
		else if (67 <= b && b <= 69) cout << "D+";
		else if (60 <= b && b <= 66) cout << "D";
		else cout << "F";
		cout << '\n';
	}

	return 0;
}
