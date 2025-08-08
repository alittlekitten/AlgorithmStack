#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 11104 Fridge of Your Dreams
	// 수학
	int n;
	string s;
	cin >> n;
	while (n--) {
		cin >> s;
		cout << stoi(s, nullptr, 2) << '\n';
	}

	return 0;
}
